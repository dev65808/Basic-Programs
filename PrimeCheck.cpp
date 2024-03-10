#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"Enter any number: ";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"Not Prinme for: "<<i<<"\n";
        }
        else{
            cout<<"Prime for: "<<i<<"\n";
        }
        i++;
    }
}