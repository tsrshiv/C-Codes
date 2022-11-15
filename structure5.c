#include <stdio.h>
#include <math.h>
//1234321 daigram
int main() {
    int n,sum,num,c;
    printf("Enter the no of rows n and column c :");
    scanf("%d%d", &n,&c);

for(int i=1;i<=n;i++){
    num=i-1;
 for(int j=1;j<=c;j++){
   if(i+j>=c/2+2 && j<=5){
    sum=i+j-n;
   }
    else{ for(int k=j;k>=i-j+5;--k){
    sum=k;
   }
   
   }
    
 if(i+j>=c/2+2 && j-i<5 ){
 printf("%d",sum);}
 else{ printf(" ");}
 
}
printf("\n");
}


  return 0;
  }
  
   
