#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of "<<n<<" number is "<<sum;
}