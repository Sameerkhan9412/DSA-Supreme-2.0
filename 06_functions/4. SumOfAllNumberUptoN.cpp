#include<iostream>
using namespace std;

int findSumUptoN(int n)
{
    int sum=0;
    sum=(n*(n+1))/2;
    return sum;
}

int main(){
    int n;
    cout<<"Enter number to find Sum :"<<endl;
    cin>>n;
    cout<<"Sum of numbers from 1 to "<<n<<" is : "<<findSumUptoN(n);
    return 0;
}