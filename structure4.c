#include <stdio.h>
//Reverse pyramid
int main() {
    int n,s,c;
    printf("Enter the no of rows n and column c :");
    scanf("%d%d", &n,&c);

for(int i=1;i<=n;i++){
 for(int j=1;j<=c;j++){
   if((j>=i) && (j<=c-i+1)){
   printf("*");}
   else {
    printf(" ");
   }
}
printf("\n");
}


  return 0;
  }
  
   
