// 1. Count Rows :5

// 2. Write down what happening in Each row
// ____*         4 Space 1 star
// ___* *        3 Space 2 star
// __* * *       2 Space 3 star
// _* * * *      1 Space 4 star
// * * * * *     0 space 5 star


#include<iostream>
using namespace std;
int main(){
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
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
