#include <stdio.h>

int main() {
    int n;
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter the value of n :");
    scanf("%d",&n);

    int i;
    for(i=0;i<=9;i++){
        if(n==ar[i]) { 
         printf("Element is found\n n is the %d element of array \n",i+1);
            break;
            }
        else if(i==9) 
        {
     printf("Element is not found");
         }
}
    return 0;
}
   





