#include<iostream>
using namespace std;
int main(){
    int amt;
    cout<<"Enter amount: ";
    cin>>amt;
    int count;
    cout<<"Enter the amount of note you want to count: ";
    cin>>count;
    int amt100=amt/100;
    int amt50=(amt-(amt100*100))/50;
    int amt20=(amt-(amt100*100))/20;
    int amt1=(amt-(amt100*100)-amt20*20)/1;
    switch(count){
        case 100:cout<<amt100<<endl;
        break;
        case 50:cout<<amt50<<endl;
        break;
        case 20:cout<<amt20<<endl;
        break;
        case 1:cout<<amt1<<endl;
        break;
        default:cout<<"Invalid note";
    }
}