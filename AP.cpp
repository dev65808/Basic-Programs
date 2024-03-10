#include<iostream>
using namespace std;
int ap(int n){
    int ans=(3*n)+7;
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int nthTerm=ap(n);
    cout<<nthTerm;
}