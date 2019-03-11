CC = gcc
AR = ar rcs
RANLIB = ranlib
OBJ = matarith.o

lib: $(OBJ)
		$(AR) libmat.a $^
		$(RANLIB) libmat.a

all: lib test

*.o: *.c
		$(CC) -c $< -o $@

test: libmat.a
		$(CC) -o test -L./src test.c -lmat

clean:
		rm *.o *.a
