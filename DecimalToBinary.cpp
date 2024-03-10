#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int ans=0;
    int i=0;
    while(num!=0){
        int bit=num&1;
        ans=(bit*pow(10,i)+1e-9)+ans;
        num=num>>1;
        i++;
    }
    cout<<ans;
}