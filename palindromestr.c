#include<stdio.h>
#include<string.h>
int main(){
  int n;
    char str[n];
    printf("enter the string");
    scanf("%d%s", &n,&str);
     for ( int i = 0; i < n; i++)
    {
      if(str[i]=str[n-i]){
         printf("string is palindrome");
      }
       else{
        printf("string is not a palindrome");
      }
    }
      return 0;
    }
    
