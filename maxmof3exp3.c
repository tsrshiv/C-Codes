# include <stdio.h>
int main ()
{
int a, b, c, g ;
printf("Enter three numbers : ") ;
scanf("%d %d %d", &a, &b, &c) ;
g = a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
printf("\nThe biggest number is : %d", g) ;
}

