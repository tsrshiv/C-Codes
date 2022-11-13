#include<stdio.h>  
 int main()    
{    
int n,rem,sum=0,original;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  original=n;
  while(n!=0)    
  {    
     rem=n%10;    
     n=n/10; 
    sum= sum+(rem*rem*rem) ;
  }  
  if (original==sum){ 
  printf(" Armstrong number");  } 
  else { printf("Not a Armstrong number");
  }  
  return 0;  
}   