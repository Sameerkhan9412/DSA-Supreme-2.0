#include<iostream>
using namespace std;

int findSumEvenUptoN(int n)
{
    int sum=0;
    for(int i=2;i<=n;i+=2)
    {
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter number to find Sum of Even Numbers :"<<endl;
    cin>>n;
    cout<<"Sum of Even numbers from 1 to "<<n<<" is : "<<findSumEvenUptoN(n);
    return 0;
}