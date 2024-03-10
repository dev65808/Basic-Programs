#include<iostream>
using namespace std;
int nthFibTerm(int n){
    int a=0;
    int b=1;
    int c;
    for(int i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return(c);
}
int main(){
    int n;
    cout<<"Enter nth term: ";
    cin>>n;
    int ans=nthFibTerm(n);
    cout<<ans;
}