#include<iostream>
using namespace std;

//Right direction Shift
void shiftArray(int arr[],int n)
{
    //Step 1
    int temp=arr[n-1];
    // Step 2Shift
    for(int i=n-1;i>=1;i--)
    {
        arr[i]=arr[i-1];
    }
    // Step 3 : Copy temp to 0 th Index
    arr[0]=temp;
}


int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    shiftArray(arr,6);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}