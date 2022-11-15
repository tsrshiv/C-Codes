#include <stdio.h>

int main() {
    int n;
    printf("Enter the no of rows n :"); //n=4
    scanf("%d", &n);

for(int i=1;i<=n;i++){
 for(int j=1;j<=7;j++){
   if( i+j<=5 || j>=3+i){
   printf("*");} 
   
  
   else {
     printf(" ");
   }
  }
printf("\n");
}


  return 0;
  }
  
   
