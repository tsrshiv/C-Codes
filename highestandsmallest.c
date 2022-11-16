#include <stdio.h>

int main() {
    int n,max,min;
    int arr[10]={0,2,10,4,76,46,69,8,89,10};
    printf("Enter the value of n :");
    scanf("%d",&n);

    int i;
    max=-10;
    min=15;
    for(i=0;i<=9;i++){
        if(arr[i]>max){
max=arr[i];
}
        if(arr[i]<min){
        min=arr[i];
        }
        }
          printf("Maximum and  minimum is : %d,%d",max, min);
     return 0;   
    }
