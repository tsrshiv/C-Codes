#include <stdio.h>
#include <math.h>

int main(){
int a,b,c;
printf("Enter 3 number : ");
scanf("%d%d%d",&a,&b,&c);

if (a>b && a>c ){
    printf("a is largest \n");
    if (b>c)
    {
    printf("Max is %d \n Min is %d",a,c);
    }
    else {
         printf("Max is %d \n Min is %d",a,b);
    }
    
}

else if(b>a && b>c ){
    printf("b is largest \n");
    if (a>c)
    {
    printf("Max is %d Min is %d",b,c);
    }
    else {
         printf("Max is %d \n Min is %d",b,a);
    }
}
else { 
    printf("C is largest \n");
    if (a>b)
    {
    printf("Max is %d \n Min is %d",c,b);
    }
    else {
         printf("Max is %d \n Min is %d",c,a);
    }

}

    
	return 0;
}