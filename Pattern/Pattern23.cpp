#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;int space=i-1;int num=n-i+1;int count=i;
        while(space){
            cout<<" ";
            space--;
        }
        while(j<=num){
            cout<<""<<count;
            count++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}