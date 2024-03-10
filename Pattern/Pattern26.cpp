#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;int star1=i-1;int num=n-i+1;int count=1;
        while(j<=num){
            cout<<""<<count;
            count++;
            j++;
        }
        while(star1){
            cout<<"*";
            star1--;
        }
        int star2=i-1;
        while(star2){
            cout<<"*";
            star2--;
        }
        int k=1;int start=n-i+1;
        while(k<=num){
            cout<<""<<start;
            start--;
            k++;
        }
        cout<<"\n";
        i++;
    }
}