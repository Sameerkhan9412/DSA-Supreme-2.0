// **** **** 1
// ***   *** 2
// **     ** 3
// *       * 4
// *       * 5
// **     ** 6
// ***   *** 7
// **** **** 8
// 123456789

#include <iostream>
using namespace std;
int main()
{
    int num = 8;
    int n = 4;
    for (int row = 0; row < n; row++)
    {
        // Inverted Pyrami 1
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        // Full pyramid 1
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        // Inverted Pyramid 2
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        // Inverted Pyrami 1
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }

        // Full pyramid 1
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << " ";
        }
        // Inverted Pyramid 2
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
