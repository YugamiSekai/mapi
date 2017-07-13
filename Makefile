# definitions
TARGET		:= $(shell basename $$(pwd))

CC		:= g++
CFLAGS		:=

ODIR		:= build
SDIR		:= src

SOURCES		:= $(shell find src -name '*.cpp')
HEADERS		:= $(shell find src -name '*.h')

LDFLAGS		:= 
DEL		:= rm -rfv

################################################################################
# collection of files

OBJS		:= $(patsubst src/%.cpp,build/%.o, $(SOURCES))

################################################################################
# end of definitions - start of rules

ifneq "$(MAKECMDGOALS)" "clean"
ifneq "$(MAKECMDGOALS)" "distclean"
ifneq "$(MAKECMDGOALS)" "test"
DUMMY           := $(shell mkdir -p build)
endif
endif
endif

%: %.c # delete impicit rule


%: %.cpp # delete impicit rule


%.o: %.c # delete impicit rule


%.o: %.cpp # delete impicit rule


%.o: %.asm # delete impicit rule


%.o: %.S # delete impicit rule

$(TARGET): $(OBJS)
	@echo "linking..."
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJS)
	@echo ""
	@stat -c '%n	%s Bytes' $@
	@echo ""

build/%.o : src/%.c $(HEADERS)
	@echo "compiling $< ..."
	$(CC) $(CFLAGS) -c -o $@ $<

distclean: clean
	@$(DEL) $(TARGET)

clean:
	@$(DEL) build

test:
	@echo "-------------------------------------------------------------------------------"
	@echo "SOURCES='$(SOURCES)'"
	@echo "-------------------------------------------------------------------------------"
	@echo "HEADERS='$(HEADERS)'"
	@echo "-------------------------------------------------------------------------------"
	@echo "OBJS='$(OBJS)'"
	@echo "-------------------------------------------------------------------------------"
	@echo "CFLAGS='$(CFLAGS)'"
	@echo "-------------------------------------------------------------------------------"
	@echo "LDFLAGS='$(LDFLAGS)'"
	@echo "-------------------------------------------------------------------------------"
