#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int twoscomplement=(~num);
    int ans=0;
    int i=0;
    while(twoscomplement!=0){
        int bit=twoscomplement&1;
        ans=(bit*pow(10,i)+1e-9)+ans;
        twoscomplement=twoscomplement>>1;
        i++;
    }
    cout<<ans;
}