#include<stdio.h>
int main(){
    int n;
int arr[5]={ 1,3,2 ,5, 4};
int rev[5];
scanf("%d",&n);
for (int i=n-1; i >=0; i--)
{
 rev[n-1]=arr[i];
 printf("%d",rev[n-1]);
}

return 0;
}

