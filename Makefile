CC      = gcc
FLAGS   = -Wall -Wextra -Wpedantic
SOURCES = $(wildcard *.c) $(wildcard lib/*.c)
OBJECTS = $(patsubst %.c, build/%.o, ${SOURCES})

# This target is the final compile and depends on other targets
link: ${OBJECTS}
	${CC} $^ -o build/main

# This target compiles just main.cpp (creates an object file)
build/main.o: main.c
	${CC} -c ${FLAGS} $< -o $@

# This target compiles just lib/*.o (creates an object files)
build/lib/%.o: lib/%.c
	${CC} -c ${FLAGS} $< -o $@

# Remove all built files, and re-create the bin directory
clean:
	rm -rf ./build && mkdir -p build/lib

# Run the solution (FYI: we could make run dependent on link)
run-task-1:
  # pipe output from printf to wc using -w flag which counts the number of words
  # use @ to suppress echoing the actual command
	@printf "The quick brown fox jumps over the lazy dog\n" | wc -w

# Run solution 2
# Pipe the output from echo and convert to uppercase using tr UNIX tool with lower and upper flags
run-task-2:
	@echo "The quick brown fox jumps over the lazy dog" | tr '[:lower:]' '[:upper:]'
