#include <iostream>

using namespace std;


int main(){
    int num;
    float x=5.75;
    int y=(int)x;
    int z=y--;
    float w = ++x;

    cout<<(int)x+y<<endl;
    cout<<z<<endl;
    cout<<(double)w<<endl;
    cout<<(x==y)<<endl;
    cout<<(w+z)/2<<endl;



 cout<<"Please enter your number to check if it is odd or even.\n";
 cin>>num;

    if(num%2==0){

        cout<<"The number "<<num<<" is even.";
    }
    else{
        cout<<"The number is odd";
    }
    return 0;
}
