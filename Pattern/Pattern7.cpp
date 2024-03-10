#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;//we can also use int value=i
        while(j<=i){
            cout<<" "<<i+j-1;//print value and value++
            j++;
        }
        cout<<"\n";
        i++;
    }
}