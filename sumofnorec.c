#include<stdio.h>
int sum(int n){
    if(n<=0){
    return n;
    }
    else{
    return n+sum(n-1);
     }
}
int main(){
    int a;
    printf("enter the no");
    scanf("%d",&a);
    printf("%d", sum(a));
    return 0;
}