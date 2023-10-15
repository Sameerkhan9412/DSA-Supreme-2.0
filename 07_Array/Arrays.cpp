#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
    arr[0] = 100;
}

int getUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void printAllPairs(int arr[], int n)
{
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i] << "," << arr[j];
            cout << endl;
        }
    }
    cout << "}";
}


int main()
{
    //   int a=50;
    //   cout<<a<<endl;
    //   int &b=a;
    //   //Ref variable == Same memory location ,but different names
    //   cout<<b<<endl;

    // int arr[]={1,2,4};
    // int size=3;
    // solve(arr,size);
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // Remove Duplicates
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8};
    // int n = 17;
    // cout << "Unique element in array is " << getUnique(arr, n);

    int arr[] = {10, 20, 30};
    printAllPairs(arr, 3);

    return 0;
}