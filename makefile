src = $(wildcard ./*.cpp ./*.c)  
obj = $(patsubst %.cpp, %.o, $(patsubst %.c, %.o, $(src)))

target = minidb  
CC = g++  

$(target): $(obj)  
	$(CC) $(obj) -o $(target)  

%.o: %.cpp %.c
	$(CC) -c $< -o $@  
		
.PHONY: clean  
clean:
	rm -rf $(obj) $(target)