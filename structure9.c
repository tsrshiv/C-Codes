#include<stdio.h>
int main(){
int n;
printf("Enter the value of n :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=5;j++){
        if(i<=(n+1)/2 && j<=2*i-1){
        printf("%d",j);}
        else if(i>(n+1)/2 && j<=2*n-2*i+1){
        printf("%d",j);

        }
        
    }
printf("\n");

}return 0;

} 