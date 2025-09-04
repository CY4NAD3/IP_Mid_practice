#include<iostream>
using namespace std;

int main(){
    string grade;
    float marks[5], GPA=0,totalGPA;
    cout<<"Inpute marks of 5 courses: ";
    
    for(int i=0;i<5;i++){
    cin>>marks[i];
    }
        for(int i=0;i<5;i++){
            if(marks[i]<=100 && marks[i]>=90){
                grade="A+";
                GPA=4.00;
            }
            else if(marks[i]<=89.99 && marks[i]>=85){
                grade="A";
                GPA=3.75;
            }
            else if(marks[i]<=84.99 && marks[i]>=80){
                grade="B+";
                GPA=3.50;
            }
            else if(marks[i]<=79.99 && marks[i]>=75){
                grade="B";
                GPA=3.25;
            }
            else if(marks[i]<=74.99 && marks[i]>=70){
                grade="C+";
                GPA=3.00;
            }
            else if(marks[i]<=69.99 && marks[i]>=65){
                grade="C";
                GPA=2.75;
            }
            else if(marks[i]<=64.99 && marks[i]>=60){
                grade="D+";
                GPA=2.50;
            }
            else if(marks[i]<=59.99 && marks[i]>=50){
                grade="D";
                GPA=2.25;
            }
            else if(marks[i]<=49.99 && marks[i]>=0){
                grade="F";
                GPA=0.00;
            }

               totalGPA+=GPA;
                

}
    cout<<totalGPA<<endl;
    float CGPA=totalGPA/5;

    cout<<"The CGPA is: "<<CGPA<<endl;
}