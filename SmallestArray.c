#include <stdio.h>

int main() {
    int n,min;
    int ar[10]={1,7,3,4,10,6,2,8,9,5};
    printf("Enter the total no of element in array n:");
    scanf("%d",&n);

    int i; 
    min=20;
    for(i=0;i<=n-1;i++){
       
      if(ar[i]<min){
        min=ar[i];

      }
     
    
    }
    printf("Minimum is : %d",min);
   
    
    return 0;
}
   





