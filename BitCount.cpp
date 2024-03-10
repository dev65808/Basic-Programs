#include<iostream>
using namespace std;
int setbitcount(int num){
    int count=0;
    while(num!=0){
        if(num&1==1){
            count++;
        }
        num=num>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    int setbit_a=setbitcount(a);
    int setbit_b=setbitcount(b);
    cout<<"Sum of set bit present in a and b: "<<setbit_a+setbit_b;
}