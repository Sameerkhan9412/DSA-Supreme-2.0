//     *
//    * *
//   *   *
//  *     *
// *       *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows "<<endl;
    cin>>n;
   for(int row=0;row<n;row++){
        //Space
        for(int col=0;col<n-row-1;col=col+1)
        {
            cout<<" ";
        }
        //star
        for(int col=0;col<row+1;col=col+1)
        {
            if(col==0||col==row)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}


