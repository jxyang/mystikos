#include <stdio.h>

int main()
{
    extern void foo();

    foo();
    return 0;
}

void goo()
{
    printf("goo()\n");
}