
# Compiler
CC = gcc

# Compiler flags
CFLAGS = -I src/include

# Directories
SRCDIR = src
BUILDDIR = build
BINDIR = .

# Executable paths
EXEPATH = /opt/cpm/cpm
SYMLINK = /usr/local/bin/cpm

# Sources and destinations
SOURCES := $(shell find $(SRCDIR) -name '*.c')
OBJECTS := $(SOURCES:%=$(BUILDDIR)/%.o)
EXECUTABLE = cpm

executable: clean $(BINDIR)/$(EXECUTABLE)
	sudo cp cpm $(EXEPATH)
	sudo ln -fs $(EXEPATH) $(SYMLINK)

$(BINDIR)/$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(BUILDDIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf cpm build
