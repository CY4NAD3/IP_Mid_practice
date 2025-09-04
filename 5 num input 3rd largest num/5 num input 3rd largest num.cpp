#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;

    cout << "Enter 5 integers: ";
    cin >> a >> b >> c >> d >> e;

    // Initialize largest, secondLargest, and thirdLargest
    int largest, secondLargest, thirdLargest;

    // Determine the largest, secondLargest, and thirdLargest directly using if-else
    if (a > b)
    {
        largest = a;
        secondLargest = b;
    }
    else
    {
        largest = b;
        secondLargest = a;
    }

    if (c > largest)
    {
        thirdLargest = secondLargest;
        secondLargest = largest;
        largest = c;
    }
    else if (c > secondLargest)
    {
        thirdLargest = secondLargest;
        secondLargest = c;
    }
    else
    {
        thirdLargest = c;
    }

    if (d > largest)
    {
        thirdLargest = secondLargest;
        secondLargest = largest;
        largest = d;
    }
    else if (d > secondLargest)
    {
        thirdLargest = secondLargest;
        secondLargest = d;
    }
    else if (d > thirdLargest)
    {
        thirdLargest = d;
    }

    if (e > largest)
    {
        thirdLargest = secondLargest;
        secondLargest = largest;
        largest = e;
    }
    else if (e > secondLargest)
    {
        thirdLargest = secondLargest;
        secondLargest = e;
    }
    else if (e > thirdLargest)
    {
        thirdLargest = e;
    }

    cout << "The 3rd largest number is: " << thirdLargest << endl;

    return 0;
}
