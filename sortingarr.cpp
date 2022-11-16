#include<iostream>
using namespace std;
int main(){
int n,rem;
int binary=0;
int i=1;
cin>>n;
if(n>0){
    cout<<n;
    if(n!=0){
rem=n%2;
binary=binary+i*rem;
n=n/2;
i=i*10;
    }
cout<<binary<<endl;
}
return 0;
}