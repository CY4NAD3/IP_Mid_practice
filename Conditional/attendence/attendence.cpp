#include<iostream>
using namespace std;

int main(){

    float classno,classatnd;
    cout<<"Input the number of clases: ";
    cin>>classno;
    cout<<"Input the number of clases attended: ";
    cin>>classatnd;
    float attendenceper=0;
    attendenceper=(classatnd/classno)*100;

    cout<<"Percentage of the attendence is: "<<attendenceper<<"%"<<endl;

    if(attendenceper>=80){

        cout<<"The student can sit for exam";

    }
    else{

        cout<<"The student can not sit for exam";

    }
}