// *       * 
//  *     * 
//   *   * 
//    * * 
//     * 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows "<<endl;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        //Print spaces
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
        for(int col=0;col<n-row;col++)
        {
            if(col==0||col==n-row-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

