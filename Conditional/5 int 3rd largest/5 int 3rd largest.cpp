#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3, num4, num5, lr, lr2, lr3;
    cout << "Enter 5 numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if (num1 > num2)
    {
        lr = num1;
        lr2 = num2;
    }
    else
    {
        lr = num2;
        lr2 = num1;
    }
    if (num3 > lr)
    {
        lr3 = lr2;
        lr2 = lr;
        lr = num3;
    }
    else if (num3 > lr2)
    {

        lr3 = lr2;
        lr2 = num3;
    }
    else
    {
        lr3 = num3;
    }
    if (num4 > lr)
    {
        lr3 = lr2;
        lr2 = lr;
        lr = num4;
    }
    else if (num4 > lr2)
    {
        lr3 = lr2;
        lr2 = num4;
    }
    else if (num4 > lr3)
    {
        lr3 = num4;
    }
    if (num5 > lr)
    {
        lr3 = lr2;
        lr2 = lr;
        lr = num5;
    }
    else if (num5 > lr2)
    {
        lr3 = lr2;
        lr2 = num5;
    }
    else if (num5 > lr3)
    {
        lr3 = num5;
    }

    cout << "Third largest number is: " << lr3 << endl;

    return 0;
}
