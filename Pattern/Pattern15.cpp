#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;char ch='A'+i-1;
        while(j<=i){
            cout<<" "<<ch;//we can also use 'A'+i+j-2
            ch++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}