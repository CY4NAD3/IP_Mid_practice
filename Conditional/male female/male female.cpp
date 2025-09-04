#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter gender symbol: M or m for male and F or f for female: ";
    cin>>ch;
    ch=tolower(ch);

    if(isalpha(ch)){

        switch(ch){

            case 'm':
            cout<<"male";
            break;

            case 'f':
            cout<<"female";
            break;

            default:
            cout<<"Undefined";
            break;

        }

    }
    else{
        cout<<"Undefined";
    }

}