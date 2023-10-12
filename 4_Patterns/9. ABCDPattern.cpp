// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
// ABCDEFEDCBA

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        char ch;
        for(int col=0;col<row+1;col++)
        {
            ch=col+1+'A'-1;
            cout<<ch;
        }
        //Jab tak A tak nahi pohoch jate tab tak print karenge
        
        for(char alphabet=ch;alphabet>'A';)
        {
            alphabet=alphabet-1;
            cout<<alphabet;
        }
        cout<<endl;
    }
    return 0;
}