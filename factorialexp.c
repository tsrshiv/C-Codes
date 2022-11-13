#include <stdio.h>

int main() {

  int n,sum=1;
  printf("Enter a Number : ");
  scanf("%d",&n);

if (n==0){
    printf("factorial is : 1") ;
}

 else{ for (int i=1; i<=n;i++)
 sum=sum*i;
 printf("Factorial is %d",sum);


}










}