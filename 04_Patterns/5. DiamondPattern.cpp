//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include<iostream>
using namespace std;
int main()
{
int n,num;
    cout<<"Enter number of rows "<<endl;
    cin>>num;
    n=num/2;
    for(int row=0;row<n;row++){
        //Space
        for(int col=0;col<n-row-1;col=col+1)
        {
            cout<<" ";
        }
        //star
        for(int col=0;col<row+1;col=col+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=0;row<n;row++)
    {
        //Print spaces
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}

