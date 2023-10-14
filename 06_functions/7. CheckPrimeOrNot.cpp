#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    int m = sqrt(n);
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter number to check number is prime or not : ";
    cin >> n;
    if (isPrime(n))
    {
        cout << "Number " << n << " is a prime number.";
    }
    else
    {
        cout << "Number " << n << " is not a prime number.";
    }
    return 0;
}