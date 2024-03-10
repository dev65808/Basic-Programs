#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nth number: ";
    cin>>n;
    int a=0;
    int b=1;
    int nextNum;
    cout<<" "<<a<<" "<<b;
    for(int i=1;i<=n;i++){
        nextNum=a+b;
        cout<<" "<<nextNum;
        a=b;
        b=nextNum;
    }
}