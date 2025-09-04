#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter number: "<<endl;
    cin>>num;
    
    if(num>0){
        cout<<"Absolute value is "<<num<<endl;
    }
    else if(num<0){
        cout<<"Absolute value is "<<-num<<endl;
    }
    else{
        cout<<"Invalid "<<endl;
    }
}