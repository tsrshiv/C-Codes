//for argument and return value
#include <stdio.h>
int initialize(int *a, int *b, char *c)
{
    *a = 10;
    *b = 20;
    *c = 'A';
    return *a;

}
int main(void)
{
    int a, b;
    char c;
 
    initialize(&a, &b, &c);
    printf("a = %d, b = %d, c = %c", a, b, c);
 
    return 0;
}

