#include <stdio.h>

int main() {
    int n;
    int ar[10]={1,2,3,4,5,6,7,8,9,10};
    int rev[10];
    printf("Enter the total no of element in array n:\n");
    scanf("%d",&n);

printf("\n");
    for(int i=n-1;i>=0;i--){
       
        rev[n-i-1]=ar[i];
    
       printf("%d\n",rev[n-i-1]);
    }
   

return 0;
}
   





