#include<stdio.h>
    int rec(int n){
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        else{
             return n * rec(n-1);
    }
}
int main(){
    int a;
    printf("enter the no\n");
    scanf("%d", &a);
    int rec(int a);

printf("%d", rec(a));

return 0;

}
