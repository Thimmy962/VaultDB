# 1. Compiler and Strict Flags
CC      := gcc
CFLAGS  := -std=c2x -Wall -Wextra -Wshadow -Wconversion -Wformat=2 -Wpedantic -Og -g  -Wno-unused-variable -Wno-unused-parameter

# 2. Files
SRCS    := $(wildcard *.c)
OBJS    := $(SRCS:.c=.o)

# 3. Target
TARGET  := vaultDB

# 4. Build Rules
all: $(TARGET)

# The Linking Step
$(TARGET): $(OBJS)
# 	@echo "Linking executable: $(TARGET)"
	@$(CC) $(OBJS) -o $(TARGET)

# The Compilation Step
%.o: %.c
# 	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -c $< -o $@

# 5. Cleanup
clean:
	@echo "Cleaning up..."
	@rm -f $(OBJS) $(TARGET)

# 6. Run
run: all
# 	@echo "Running $(TARGET)..."
	@./$(TARGET)

# 7. Debug
# This builds the executable and immediately launches GDB
debug: all
	@gdb ./$(TARGET)

.PHONY: all clean run
