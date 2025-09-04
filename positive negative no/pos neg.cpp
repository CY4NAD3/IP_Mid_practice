#include<iostream>
using namespace std;

int main(){

    double num;
    cout<<"Please enter your number: ";
    cin>>num;

    if(num>0){
        cout<<"The number is Positive";
    }
    else if(num<0){
        cout<<"The number is Negative";
    }
    else{
        cout<<"The number is Zero";
    }
}