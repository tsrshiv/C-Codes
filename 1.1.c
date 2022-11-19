//without argument and without return value
#include<stdio.h>
void test();          
 
int main()
{
    test();                         
    return 0;
}
 
void test()  
{ 
    int a = 50, b = 80;   
    printf("\nvalues : a = %d and b = %d", a, b);
}