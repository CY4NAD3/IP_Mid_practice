#include <iostream>
using namespace std;

int main(){
    double val1=7.2;
    int val2=val1;
    int val3=val2++;
    double val4=--val1;

    cout<<(int)val1+val1<<endl;
    cout<<val2<<endl;
    cout<<val3<<endl;
    cout<<val4<<endl;
    cout<<(double)val3+val4<<endl;
    cout<<(val1!=val4)<<endl;

    return 0;
}