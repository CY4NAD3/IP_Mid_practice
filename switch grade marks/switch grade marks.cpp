#include<iostream>
using namespace std;

int main(){

    string grade;
    
    cout<<"Please enter the grade to receive a remark: "<<endl;
    cin>>grade;
    
    if(grade == "A+"){ //We need to use if because "A+" is a string and not a single character or char
        
        cout<<"Excellent";

    }
    else if (grade.length() == 1){ //using condition of 1 letter length string to go into else if
        
        char gradech = grade[0]; //converting string grade to char grade and assigning it to gradech variable
                                 //grade[0] takes the first character from the ctring or in this case only one character is present
        switch (gradech){

        case 'A':
            cout<<"Very Good";
            break;
        case 'B':
            cout<<"Good";
            break;
        case 'C':
            cout<<"Average";
            break;
        case 'D':
            cout<<"Below Average";
            break;            
        case 'F':
            cout<<"Fail";
            break;    
        default:
            cout<<"Invalid Letter";
        }
    }
    /*else{
        cout<<"Invalid Letter";
    }*/


    return 0;
}