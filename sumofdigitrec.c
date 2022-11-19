#include<stdio.h>
int sum(int n){
    if(n!=0){
    return (n%10+sum(n/10));
    }

}
int main(){
    int a;
    printf("enter the no");
    scanf("%d", &a);
    int sum(int a);
    printf("%d", sum(a));
    return 0;
}