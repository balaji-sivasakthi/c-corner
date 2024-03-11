CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRCDIR = src
OBJDIR = obj
BINDIR = bin
TARGET = program

# Recursively find all .c files in the src directory and its subdirectories
SRC := $(wildcard $(SRCDIR)/**/*.c) $(wildcard $(SRCDIR)/*.c)

# Generate a list of object files based on the source files
OBJ := $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Generate a list of directories
DIRS := $(sort $(dir $(SRC)))

# Generate a list of object directories
OBJDIRS := $(DIRS:$(SRCDIR)%=$(OBJDIR)%)

all: $(BINDIR)/$(TARGET)

# Create object directories
$(OBJDIRS):
	mkdir -p $@

# Compile source files to object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files to create executable
$(BINDIR)/$(TARGET): $(OBJDIRS) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@
	chmod +x $@
	
# Run the program after compiling
run: all
	$(BINDIR)/$(TARGET)

clean:
	rm -rf $(OBJDIR) $(BINDIR)/$(TARGET)
