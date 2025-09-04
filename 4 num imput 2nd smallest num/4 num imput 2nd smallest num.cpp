#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    int smallest, s_smallest;

    cout << "Input the four numbers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 < num2)
    {
        smallest = num1;
        s_smallest = num2;
    }
    else
    {
        s_smallest = num1;
        smallest = num2;
    }
    if (num3 < smallest)
    {
        s_smallest = smallest;
        smallest = num3;
    }
    else if (num3 < s_smallest)
    {
        s_smallest = num3;
    }
    if (num4 < smallest)
    {
        s_smallest = smallest;
        smallest = num4;
    }
    else if (num4 < s_smallest)
    {
        s_smallest = num4;
    }

    cout<<"The second smallest number is = "<<s_smallest<<endl;
}