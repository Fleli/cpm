
CC = gcc
CFLAGS = -I src/include

SRCDIR = src
BUILDDIR = build
BINDIR = .

EXEPATH = /opt/cpm/cpm
SYMLINK = /usr/local/bin/cpm

SOURCES := $(shell find $(SRCDIR) -name '*.c')
OBJECTS := $(SOURCES:%=$(BUILDDIR)/%.o)
EXECUTABLE = cpm

executable: clean $(BINDIR)/$(EXECUTABLE)
	@echo "\nRunning the CPM installer."
	@echo "The installer may ask your password.\n"
	@sudo cp cpm $(EXEPATH)
	@sudo ln -fs $(EXEPATH) $(SYMLINK)
	@echo "Finished.\n\nChad Package Manager is now available in your terminal through the command 'cpm'.\n"

$(BINDIR)/$(EXECUTABLE): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(BUILDDIR)/%.c.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf cpm build
