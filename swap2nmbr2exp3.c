
#include<stdio.h>
int main()
{
int x, y;
printf("Input value for x & y: \n");
scanf("%d%d",&x,&y);

x=x+y;
y=x-y;
x=x-y;
printf("\nAfter swapping the value of x & y: %d %d",x,y);
return 0;
}

