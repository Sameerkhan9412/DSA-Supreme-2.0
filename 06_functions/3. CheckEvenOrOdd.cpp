#include <iostream>
using namespace std;

bool CheckEvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter a number to check : ";
    cin >> n;
    if (CheckEvenOrOdd(n))
    {
        cout << n << " is even number" << endl;
    }
    else
    {
        cout << n << " is odd number" << endl;
    }
    return 0;
}