#include<stdio.h>
int maxmin(int a, int b){
    if(a>b){
        printf("a is max and b in min");
    }
        else {
            printf("b is max and a is min");
        }
    
}
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d", maxmin(a,b));
    return 0;
}