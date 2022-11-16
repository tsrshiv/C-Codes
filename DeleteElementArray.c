#include <stdio.h>

int main() {
    int n,m;
    int ar[n];
    printf("Enter the total no of element in array n:\n");
    scanf("%d",&n);
    printf("Enter the values of array :\n");
    for(int k=0;k<=n-1;k++){
    
        scanf("%d",&ar[k]);
    }
    printf("Enter the element no which you want to delete m:");
    scanf("%d",&m);
    for(int i=m;i<=n-1;i++){
        ar[i-1]=ar[i];
    }
    printf("The new array is : ");
 for(int j=0;j<=n-2;j++){
    printf(" %d\t",ar[j]);
    }

return 0;
}
   





