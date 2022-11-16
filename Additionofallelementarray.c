#include <stdio.h>

int main() {
    int n,sum=0;
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter the total no of element in array n:");
    scanf("%d",&n);

    int i;
    for(i=0;i<=9;i++){
     sum=sum + ar[i];
    
    }
    printf("%d",sum);
    
         return 0;
}
   





