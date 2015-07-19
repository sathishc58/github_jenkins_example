INC=-I../include
SRCS = ../libsrc/add.c ../libsrc/mult.c ../libsrc/sub.c ../libsrc/div.c
OBJPATH = ../objects
OBJECTS = add.o mult.o sub.o div.o
OBJS = $(SRCS:.c=.o)
.SUFFIXES: .c .o

libsvc.a : $(OBJS)
	@echo $@
	ar -qv libsvc.a $^
	mv $^ ${OBJPATH};
	mv libsvc.a ../lib;

.c.o:
	gcc $(INC) -c $< -o $@ ;

clean:
	@echo $@
	rm ../lib/* ../objects/*
