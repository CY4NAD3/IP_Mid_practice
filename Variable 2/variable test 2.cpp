#include <iostream>
using namespace std;

int main(){
    float x=5.75;
    int y=(int)x;
    int z=y--;
    float w = ++x;

    cout<<(int)x+y<<endl;
    cout<<z<<endl;
    cout<<(double)w<<endl;
    cout<<(x==y)<<endl;
    cout<<(w+z)/2<<endl;

    return 0;
}