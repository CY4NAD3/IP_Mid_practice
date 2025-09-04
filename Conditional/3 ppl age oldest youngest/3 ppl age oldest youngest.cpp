#include<iostream>
using namespace std;

int main(){

    int age1,age2,age3;
    cout<<"Please enter the age of three people: "<<endl;
    cin>>age1>>age2>>age3;

    if(age1>age2 && age1>age3){

        cout<<age1<<" is the oldest";

    }
    else if(age2>age1 && age2>age3){

        cout<<age2<<" is the oldest";

    }
    else{

        cout<<age3<<" is the oldest";

    }
    cout<<endl;
    if(age1<age2 && age1<age3){

        cout<<age1<<" is the smallest";

    }
    else if(age2<age1 && age2<age3){

        cout<<age2<<" is the smallest";

    }
    else{

        cout<<age3<<" is the smallest";
        
    }


    


}