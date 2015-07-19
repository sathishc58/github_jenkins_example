INC=-I../include
LIBS=../../libsvc/lib/libsvc.a

result : ../src/result.c
	{ gcc ${INC} -L../../libsvc/lib -o result $< -lsvc ; mv result ../bin; }

clean:
	@echo "calling from svc"
	rm ../bin/*
