#include<iostream>
using namespace std;

int main(){

    char ch;
    
    cout<<"Enter letter"<<endl;
    cin>>ch;
    ch = tolower(ch);
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant";
    }
}