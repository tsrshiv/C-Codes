#include<stdio.h>
#include<string.h>
int sum=0,rem;
int reverse(int n){
    if(n!=0){
        rem= n%10;
        sum=sum*10+rem;
        reverse(n/10);
        //n=n/10;
       }
       return sum;
     }

int main(){
int a;
scanf("%d", &a );
int reverse(int a);
printf("%d", reverse(a));
return 0;

}