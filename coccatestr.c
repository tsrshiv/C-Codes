#include <stdio.h>
#include<string.h>

int main() {
    char str1[50]=" hel ";
    char str2[50]=" lo ";
    char str3[100];
    for (int i = 0; i < 5; i++)
    {
        if(i<3){
            printf("%s",&str1[i]);
        }
        if(i>=3){
            printf("%s",&str2[i]);
        }
        printf("%s",&str3[i]);
    }
    return 0;
    
}