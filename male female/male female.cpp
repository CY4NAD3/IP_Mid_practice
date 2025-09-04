#include<iostream>
using namespace std;

int main(){

    char gensym;

    cout<<"Please enter your gender letter: ";
    cin>>gensym;

    gensym=tolower(gensym);

    if(gensym == 'm'){
        
        cout<<"You are male";
    }
    else if(gensym == 'f'){
        
        cout<<"You are female";
    }
    else{
        cout<<"Undefinedk";
    }

    return 0;
}
