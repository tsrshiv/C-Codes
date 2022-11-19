#include<stdio.h>
int maxelement(int arr[10]){
for (int i = 0; i < 10; i++)
{
    for (int j = i+1; j < 10; j++)
    {
        if(arr[i]>arr[j]){
            j++;
        }
    }
    
}

}
int main(){
    int arr[10];
    printf("input an array");
    scanf("%d", & arr[10]);

}
