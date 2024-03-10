#include<iostream>
using namespace std;
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r){
    int num=fact(n);
    int den=fact(r)*fact(n-r);
    int ans=num/den;
    return ans;
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int answer=nCr(n,r);
    cout<<answer;
}