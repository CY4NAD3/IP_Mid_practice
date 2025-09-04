#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3,num4,sml1,sml2;
    cout<<"Enter the four numbers: "<<endl;
    cin>>num1>>num2>>num3>>num4;

    if(num1<num2){

        sml1=num1;
        sml2=num2;
    }
    else{
        sml1=num2;
        sml2=num1;
    }
    if(num3<sml1){
        sml2=sml1;
        sml1=num3;
    }
    else if(num3<sml2){
        sml2=sml1;
        sml2=num3;
    }
    if(num4<sml1){
        sml2=sml1;
        sml1=num4;
    }
    else if(num3<sml2){
        sml2=sml1;
        sml2=num4;
    }

    cout<<"Second smallest number is: "<<sml2;


}