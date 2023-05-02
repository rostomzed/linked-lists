CC = gcc
CFLAGS = -Wall -g

run: build
	@echo "********************************"
	@echo "Running linked_list..."
	@echo "********************************"
	@echo "Output:"
	@./linked_list

build: clean
	@echo "Building linked_list..."
	@$(CC) $(CFLAGS) -o linked_list main.c

clean:
	@echo "Cleaning up..."
	@rm -f linked_list
