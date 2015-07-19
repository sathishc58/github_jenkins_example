#include <main.h>
#include <stdio.h>

int main()
{
    char *s="Hello";
    (void) printf("%d\n", s);
    res=add(5,6);
    (void) printf("Result of function add is %d\n", res);
    res=mult(5,6);
    (void) printf("Result of function mult is %d\n", res);
    res=sub(5,6);
    (void) printf("Result of function sub is %d\n", res);
    res=div(5,6);
    (void) printf("Result of function div is %d\n", res);
}
