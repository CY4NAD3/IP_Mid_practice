#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Please enter your number: ";
    cin>>num;

    if(num<0){
        cout<<"The absolute value is: "<<-num;
    }
    else{
        cout<<"The absolute value is: "<<num;
    }
}