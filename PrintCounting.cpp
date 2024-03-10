#include<iostream>
using namespace std;
void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<" "<<i;
    }
}
int main(){
    int n;
    cout<<"Enter any number upto you want to print the counting: ";
    cin>>n;
    printCounting(n);
}