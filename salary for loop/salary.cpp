#include<iostream>
using namespace std;

int main(){

    float salary, total=0;
    int i;

    for(i=0; i<12 ; i++){
    cout<<"Month "<<(i+1)<<" salary: ";
    cin>>salary;
    total+=salary; //total= total+salary
    }

    cout<<"Annual Average Salary: "<<total/i;
}
