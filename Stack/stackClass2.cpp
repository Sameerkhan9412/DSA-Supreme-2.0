// #include<iostream>
// #include<stack>
// using namespace std;

// ---------------------------------------------------------
//     IMPLEMENT STACK USING __ARRAY_OPERATORS
// ----------------------------------------------------------

// class Stack{
//     public:
//     int* arr;
//     int size;
//     int top1;
//     int top2;
//     Stack(int size){
//         arr=new int[size];
//         this->size=size;
//         top1=-1;
//         top2=size;
//     }

//     void push1(int data){
//         if(top2-top1==1){
//             //no space available
//             cout<<"OVERFLOW "<<endl;
//         }
//         else{
//             top1++;
//             arr[top1]=data;
//         }
//     }

//     void push2(int data){
//          if(top2-top1==1){
//             //no space available
//             cout<<"OVERFLOW "<<endl;
//         }
//         else{
//             top2--;
//             arr[top2]=data;
//         }
//     }

//     void pop1(){
//         if(top1==-1){
//             // stack1 is empty
//             cout<<"UNDERFLOW "<<endl;
//         }
//         else{
//             arr[top1]=0;
//             top1--;
//         }
//     }

//     void pop2(){
//         if(top2==size){
//             // stack1 is empty
//             cout<<"UNDERFLOW "<<endl;
//         }
//         else{
//             arr[top2]=0;
//             top2++;
//         }
//     }

//     void print(){
//         cout<<endl;
//         cout<<"Top1: "<<top1<<endl;
//         cout<<"Top2: "<<top2<<endl;
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Stack st(6);
//     st.print();

//     st.push1(29);
//     st.print();

//     st.push1(39);
//     st.print();

//     st.push1(25);
//     st.print();

//     st.push2(250);
//     st.print();
    
//     st.push2(240);
//     st.print();

//     st.push2(260);
//     st.print();

//     // st.push2(290);
//     // st.print();

//     st.pop1();
//     st.print();

//     st.pop2();  
//     st.print();


//     return 0;
// }


// -----------------------------------------------
//     STRING IS REDUNDANT OR not
// -----------------------------------------------

#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string &str){
    stack<char> st;

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='('|| ch=='+'||ch=='-'|| ch=='*'|| ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            int operatorCount=0;
            while(!st.empty() && st.top()!='('){
                char temp=st.top();
                if(temp=='+'|| temp=='-' || temp=='*'|| temp=='/'){
                    operatorCount++;
                }
                st.pop();
            }
            // yha pr aap tabhi pochoge jab 
            // aapke stack ke top pr ek opening bracket hoge
            st.pop();
            if(operatorCount==0){
                return true;
            }
        }
    }
    //agr me jaha pahucha hoo 
    // iska matlab k hr ek bracket pair k beech me 
    // ek operator pakka milega
    return false;
}

int main(){
    string str="((a+b)*(c+d))";
    bool ans=checkRedundant(str);
    if(ans==true){
        cout<<"Redundant Brackets Present ";
    }
    else{
        cout<<"Redundant Bracket not present";
    }
    return 0;
}
// error hai isme