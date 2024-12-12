import os
import zipfile
import shutil
import subprocess
import re

"""
  @brief: Unzips all .zip files in the specified folder to a folder with the same 
    name without the .zip extension.
"""
def unzip_all_in_folder(folder_path="./submissions"):

  # Ensure the folder path exists
  if not os.path.exists(folder_path):
    print(f"Error: The folder '{folder_path}' does not exist.")
    return
  
  # List all files in the folder
  files = os.listdir(folder_path)
  
  # Iterate through the files and process .zip files
  for file in files:
    if file.endswith('.zip'):
      zip_path = os.path.join(folder_path, file)
      extract_folder = os.path.join(folder_path, file[:-4])  # Remove .zip extension for the folder name
      
      # Create a folder for the extracted files
      if not os.path.exists(extract_folder):
        os.makedirs(extract_folder)
      else:
        continue  # Skip if the folder already exists
      
      # Extract the .zip file
      try:
        with zipfile.ZipFile(zip_path, 'r') as zip_ref:
          zip_ref.extractall(extract_folder)
      except zipfile.BadZipFile:
        print(f"Error: '{file}' is not a valid zip file or is corrupted.")
  
  print("All .zip files have been processed.")


"""
  @brief: Copies all .c, .cpp, .h, and .hpp files from the `submissions` directory 
    into the `hw-src` directory, preserving subfolder structures.
"""
def copy_source_files(submissions_dir="./submissions", destination_dir="./hw-src"):
  # Ensure the destination directory exists
  if not os.path.exists(destination_dir):
    os.makedirs(destination_dir)

  # Iterate through the first-level subdirectories in submissions_dir
  for subdir in os.listdir(submissions_dir):
    subdir_path = os.path.join(submissions_dir, subdir)

    # Only process directories
    if os.path.isdir(subdir_path):
      # Create the corresponding subdirectory in the destination directory
      destination_subdir = os.path.join(destination_dir, subdir)
      if not os.path.exists(destination_subdir):
        os.makedirs(destination_subdir)

      # Walk through the first-level subdirectory and its nested subdirectories
      for root, _, files in os.walk(subdir_path):
        for file in files:
          # Skip files that start with a dot
          if file.startswith('.') or file.startswith('CMake'):
            continue
          # Check for valid file extensions
          if file.endswith(('.c', '.cpp', '.h', '.hpp')):
            dest_file = file.replace(' ', '_')
            source_file_path = os.path.join(root, file)
            destination_file_path = os.path.join(destination_subdir, dest_file)

            # Copy the file to the destination subdirectory
            shutil.copy2(source_file_path, destination_file_path)
  print("All source files have been copied.")

def copy_makefiles(folder_path='./hw-src'):
  makefile_path = "./makefile"
  for subdir in os.listdir(folder_path):
    subdir_path = os.path.join(folder_path, subdir)
    if os.path.isdir(subdir_path):
      # Copy the makefile to the subdirectory
      shutil.copy2(makefile_path, subdir_path)
  print("All makefiles have been copied.")

def make_all(folder_path='./hw-src'):
  for subdir in os.listdir(folder_path):
    subdir_path = os.path.join(folder_path, subdir)
    if os.path.isdir(subdir_path):
      print(f"run make in {subdir_path}")
      # Run make in the subdirectory, ignore the output
      subprocess.run(["make"], cwd=subdir_path, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
  print("Run all the make commands.")

def make_unix_links(folder_path='./hw-src'):
  for subdir in os.listdir(folder_path):
    subdir_path = os.path.join(folder_path, subdir)
    if os.path.isdir(subdir_path):
      # Create a symbolic link to unix
      unix_link = os.path.join(subdir_path, "unix")
      if os.path.islink(unix_link):
        os.remove(unix_link)
      if not os.path.exists(unix_link):
        os.symlink("../../unix", unix_link)
  print("Created all the unix links.")


''' delete all the files and subfolders in the given folder except [*.cpp, *.c, *.h, *.hpp, makefile, unix, minidb]'''
def clear_folder(folder_path: str):
  allowed_extensions = {".cpp", ".h", ".hpp", ".c", ".o"}
  allowed_filenames = {"makefile", "unix", "minidb"}
  for file in os.listdir(folder_path):
    path = os.path.join(folder_path, file)
    if os.path.isfile(path):
      if not file.endswith(tuple(allowed_extensions)) and file not in allowed_filenames:
        os.remove(path)
    elif os.path.isdir(path):
      shutil.rmtree(path)

''' parse the result.txt file and get the total number of passed tests'''
def get_total_passed(file_path: str) -> int:
  with open(file_path, 'r', encoding='utf-8', errors='ignore') as file:
    lines = file.readlines()
    for line in lines: 
      # Check if the line indicates all test cases passed
      if "All test cases passed!" in line:
        return 10
      match = re.search(r'Total Passed: (\d+)/\d+', line)
      if match:
        return int(match.group(1))

def run_cmds(folder_path='./hw-src'):
  cmd = f"./unix ./minidb > result.txt 2>&1"
  cnt = 0
  print(" ==== ===== ==== ")
  for file in os.listdir(folder_path):
    path = os.path.join(folder_path, file)
    if os.path.isdir(path):
      minidb_path = os.path.join(path, "minidb")
      if os.path.exists(minidb_path):
        clear_folder(path)
        subprocess.run(cmd, cwd=path, shell=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        result_path = os.path.join(path, "result.txt")
        total_passed = get_total_passed(result_path)
        if total_passed > 0:
          print(f"Student {file} passed {total_passed} tests")
        cnt += 1
  print(f"finish evaluating {cnt} students")

def run(submissions_dir="./submissions", hw_src = "./hw-src"):
  # unzip all the submissions
  unzip_all_in_folder(submissions_dir)
  # copy all the source files to hw-src
  copy_source_files(submissions_dir, hw_src)
  # copy makefiles to hw-src
  copy_makefiles(hw_src)
  # make all the source files
  make_all(hw_src)
  # make unix links
  make_unix_links(hw_src)
  # run all the commands
  run_cmds(hw_src)

def test():
  file_path = "./hw-src/shuochengwang_6464_289386_最后的项目/result.txt"
  total_passed = get_total_passed(file_path)
  print(total_passed)

if __name__ == "__main__":
  submissions_dir="./submissions"
  run(submissions_dir)
  # test()