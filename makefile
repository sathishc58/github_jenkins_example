LIBSVCMAKE = ./libsvc/make
SVCMAKE = ./svc/make

all:
	{ cd $(LIBSVCMAKE); \
	  make clean; make libsvc.a; }
	{ cd $(SVCMAKE); \
	  make clean; make result; }
