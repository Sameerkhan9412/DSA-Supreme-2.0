#include <iostream>
using namespace std;

void print2DArray(int arr[4][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[4][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    cout << "Before Transpose"<<endl;
    print2DArray(arr, 4, 4);
    transpose(arr, 4, 4);
    cout << endl;
    cout << "After Transpose "<<endl;
    print2DArray(arr, 4, 4);

    return 0;
}