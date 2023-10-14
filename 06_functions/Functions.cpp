#include<iostream>
using namespace std;

void pritName(string name){
    for(int i=0;i<5;i++)
    {
        cout<<name<<endl; 
    }
}

int main(){
    pritName("Sameer");
    pritName("khan");
    pritName("malik");
    return 0;
}