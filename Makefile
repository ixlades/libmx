CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -Werror
LIBS = -lm
LANG = clang

PROJ_NAME = DECRYPT_MATH_EXPR
EXEC_NAME = lib

.PHONY: all clean uninstall reinstall

all: $(PROJ_NAME)

$(PROJ_NAME):
	mkdir -p ./obj
	mkdir -p ./temp
	cp ./inc/* ./temp/
	cp ./src/* ./temp/
	$(LANG) $(FLAGS) ./temp/*.c -include ./temp/*.h -c
	rm -rf ./temp
	mv *.o ./obj
	ar -q libmx.a ./obj/*
	
#	$(LANG) $(CFLAGS) ./obj/* -o $(EXEC_NAME) $(LIBS)

uninstall:
	rm -rf ./obj libmx.a

clean:
	rm -rf ./obj

reinstall: uninstall $(PROJ_NAME)

