#include <iostream>
using namespace std;

void print2DArray(int arr[][3], int row, int col)
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

bool findTarget(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
                return true;
        }
    }
    return false;
}

int main()
{
    // int arr[4][3]={{10,20,30},{1,2,3},{4,5,6},{7,8,9}};
    // cout<<arr[0][1];

    // int arr[3][3];

    // int arr[3][4]={{1,2,3,4},
    // {5,6,7,8},
    // {9,10,11,12},
    // };

    // //Don't give no of rows
    // int brr[][4]={{1,2,3,4},
    // {5,6,7,8},
    // {9,10,11,12},
    // };

    // Don't give no of rows and columns ,it will throw error
    //  int crr[][]={{1,2,3,4},
    //  {5,6,7,8},
    //  {9,10,11,12},
    //  };

    // Don't give no of rows and columns ,it will work as we are giving no of columns
    //  int brr[][4]={{1,2,3,4},
    //  {5,6,7,8},
    //  {9,10,11,12},
    //  };

    // When we pass 2d array to function we need to pass no of columns in Array as parameter with Arrays

    // int arr[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    // };
    // int row = 3;
    // int col = 4;

    // print2DArray(arr,3,4);

    // int arr[3][3];
    // int row=3;
    // int col=3;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++)
    //     {
    //         cout<<"Enter input for Row Index : "<<i<<" column index : "<<j<<endl;
    //         cin>>arr[i][j];
    //     }
    // }

    // print2DArray(arr,3,3);

    int arr[][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int row = 3;
    int col = 4;
    int target = 4;
    cout << "Found or not " << findTarget(arr, row, col, target);
    return 0;
}