#include <stdio.h>

int main() {

  int n;
  printf("Enter a Number : ");
  scanf("%d", &n);
  int i=0;
  while (n!=0)
  {   n=n/10;
       
      
      i++;
     
  }
  printf("No. of  Digits :%d",i);

  
  return 0;
   }
