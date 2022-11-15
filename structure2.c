#include <stdio.h>
#include <math.h>
//1, 12,123.. in reverse 
int main() {
    int n,sum,num;
    printf("Enter the no of rows");
    scanf("%d", &n);

for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
   
    sum=i+j-n;
 if(i+j>n){
 printf("%d",sum);}
 else{ printf(" ");}
 
}
printf("\n");
}


  return 0;
  }
  
   
