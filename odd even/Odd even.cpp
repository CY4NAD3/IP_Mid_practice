#include<iostream>
using namespace std;

int main(){

 int num;

 cout<<"Please enter your number to check if it is odd or even.\n";
 cin>>num;

    if(num%2==0){

        cout<<"The number "<<num<<" is even.";
    }
    else{
        cout<<"The number is odd";
    }
}
