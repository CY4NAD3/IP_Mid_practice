#include<iostream>
using namespace std;

int main(){

    char letter;
    cout<<"Please enter your letter: ";
    cin>>letter;

    letter = tolower(letter);
    
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
        
        cout<<"The letter is vowel";
    }

    else{
        cout<<"The letter is consonant";
    }
}