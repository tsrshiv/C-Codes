#include <stdio.h>
#include<string.h>

int main() {
    char str1[50];
    char str2[50];
    printf("enter two strings\n");
    scanf("%s%s", str1,str2);
    for (int i = 0; i < 50; ++i)
    {
       if(str1[i]>str2[i]){
        printf("string 1 is larger");
        break;
       }
       else if(str1[i]<str2[i]){
        printf("string 2 is larger");
        break;
       }
       else{
        printf("both are equal");
        break;
       }
     
    }
      return 0;
}
    