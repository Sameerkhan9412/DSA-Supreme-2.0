#include <iostream>
using namespace std;

int printMaximum(int num1, int num2, int num3)
{
    // if (num1 >= num2 && num1 >= num3)
    // {
    //     cout << "Maximum is :" << num1;
    // }
    // else if (num2 >= num1 && num2 >= num3)
    // {
    //     cout << "Maximum is :" << num2;
    // }
    // else
    // {
    //     cout << "Maximum is :" << num3;
    // }
    int ans1=max(num1,num2);
    int finalAns=max(ans1,num3);
    // cout<<"Maximum is : "<<finalAns<<endl;
    return finalAns;
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter First Number :";
    cin>>num1;
    cout<<"Enter Second Number :";
    cin>>num2;
    cout<<"Enter Third Number :";
    cin>>num3;
    cout<<"Maximum is : "<<printMaximum(num1,num2,num3);
    return 0;
}