#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter letter"<<endl;
    cin>>ch; 

    if(isalpha(ch)){
        
    switch (tolower(ch)){
        
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel";
        break;
    
    default:
        cout<<"Consonant";
        break;
    }
    }
    else{
        cout<<"Error";
    }

}