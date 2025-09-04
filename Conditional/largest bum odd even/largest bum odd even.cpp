#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3,largenum;
    cout<<"Please enter the three numbers: ";
    cin>>num1>>num2>>num3;

    
    if(num1>num2 && num1>num3){
        
        cout<<num1<<" is the largest number"<<endl;
        largenum=num1;

    }

    else if(num2>num1 && num2>num3){
        
        cout<<num2<<" is the largest number"<<endl;
        largenum=num2;
    }

    else{
        cout<<num3<<" is the largest number"<<endl;
        largenum=num3;
    }

    cout<<"To check if the largest num is odd or even"<<endl;

    if(largenum%2==0){
        cout<<largenum<<"  is even";
    }
    else{
        cout<<largenum<<"  is odd";
    }

}

