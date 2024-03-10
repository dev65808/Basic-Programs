#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter any operation: ";
    cin>>ch;
    switch(ch){
        case '+':cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
        case '*':cout<<(a*b)<<endl;
        break;
        case '/':cout<<(a/b)<<endl;
        break;
        case '%':cout<<(a%b)<<endl;
        break;
        default:cout<<"Invalid Operation";
    }
}