#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;
    cout<<"Please enter the three numbers: ";
    cin>>num1>>num2>>num3;

    
    if(num1>num2 && num1>num3){
        
        cout<<num1<<" is the largest number"<<endl;
        if (num1%2==0){
            cout<<num1<<" is an even number";
        }
        else{
            cout<<num1<<" is an odd number";
        }
        
    }

    else if(num2>num1 && num2>num3){
        
        cout<<num2<<" is the largest number"<<endl;
        if (num2%2==0){
            cout<<num2<<" is an even number";
        }
        else{
            cout<<num2<<" is an odd number";
        }
    }

    else{
        cout<<num3<<" is the largest number"<<endl;
        if (num3%2==0){
            cout<<num3<<" is an even number";
        }
        else{
            cout<<num3<<" is an odd number";
        }
    }
}