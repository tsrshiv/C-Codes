#include <stdio.h>
//Square
int main() {
    int n,c;
    printf("Enter the no of rows n and column c :");
    scanf("%d%d", &n,&c);

for(int i=1;i<=n;i++){
 for(int j=1;j<=n;j++){
   if(i==1||i==n||j==1||j==c){
   printf("*");}
   else {
    printf(" ");
   }
}
printf("\n");
}


  return 0;
  }
  
   
