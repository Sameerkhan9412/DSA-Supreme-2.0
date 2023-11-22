
// BASIC THINGS
// -----------------------------------------------------------
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> st;

//     // insertion
//     st.push(10); // push is used in insert element
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     cout<<st.size()<<endl; // it print size of stack

//     // check empty or not
//     if(st.empty()){
//         cout<<"Stack is empty"<<endl;
//     }
//     else{
//         cout<<"Stack is not empty"<<endl;
//     }

//     // top element
//     cout<<"this is top element:"<<st.top()<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Stack{
//     public:
//     int* arr;
//     int size;
//     int top;

//     Stack(int size){
//         arr=new int[size];
//         this->size=size;
//         this->top=-1;
//     }
//     void push(int data){
//         if(top==size-1){
//             cout<<"Stack is Overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=data;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"Stack Underflow"<<endl;
//             return;
//         }
//         top--;
//     }
//     bool empty(){
//         if(top==-1){
//             return true;
//         }
//         return false;
//     }
//     int getTop(){
//         if(top==-1) {
//             cout<<"Stack is empty"<<endl;
//         }
//         else{
//             return arr[top];
//         }
//     }
//     int getSize(){
//         return top+1;
//     }
//     void print(){
//         cout<<"Top: "<<top<<endl;
//         cout<<"Top Element: "<<getTop()<<endl;
//         cout<<"Stack ";
//         for(int i=0;i<getSize();i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     // creation
//     Stack st(8);
//     cout<<st.getSize();

//     // push
//     st.push(10);
//     st.print();
    
//     st.push(20);
//     st.print();

//     st.push(30);
//     st.print();

//     st.push(40);
//     st.print();

//     st.push(50);
//     st.print();

//     st.push(60);
//     st.print();

//     return 0;
// }


// REVERSE USING STACK

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string str="sameer Khan";
//     stack<char> st;
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         st.push(ch);
//     }
//     cout<<endl;

//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
//     cout<<endl;
// }

// ---------------------------------------
// MIDDLE ELEMENT IN A STACK
// ---------------------------------------

// #include<iostream>
// #include<stack>
// using namespace std;

// void solve(stack<int> &st,int &pos, int &ans){
//     // base case
//     if(pos==1){
//         ans =st.top();
//         return;
//     }
//     // 1 case hum solve karenge
//     pos--;
//     int temp=st.top();
//     st.pop();

//     // recursion
//     solve(st,pos,ans);

//     // backtracking
//     st.push(temp);
// }

// int getMiddleElement(stack<int> &st){
//     int size=st.size();
//     if(st.empty()){
//         cout<<"Stack is empty"<<endl;
//         return -1;
//     }
//     else{
//         // stack is not empty
//         int pos=0;
//         if(size%2==1){
//             pos=size/2+1;
//         }
//         else{
//             // even
//             pos=size/2;
//         }
//         int ans=-1;
//         solve(st,pos,ans);
//         return ans;
//     }
// }

// int main(){
//     stack<int> st;
    // ------------------
    //     ODD CASE
    // --------------------
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // ------------------
    //     EVEN CASE
    // --------------------

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);
    // st.push(60);

    // ------------------
    //     EMPTY WALA CASE
    // --------------------
    

//     int mid=getMiddleElement(st);
//     cout<<"Middle element: "<<mid<<endl;

//     return 0;
// }


// ---------------------------------------------
//         INSERT AT BOTTOM OF THE STACK
// -----------------------------------------------

// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtBottom(stack<int> &st,int &element){
//     // base case
//     if(st.empty()){
//         st.push(element);
//         return;
//     }
//     // ek case me solve krunnga
//     int temp=st.top();
//     st.pop();

//     // recursion
//     insertAtBottom(st,element);

//     // backtrack
//     st.push(temp);

// }

// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     int element=500;
//     insertAtBottom(st,element);
//     while(!st.empty()){
//         cout<<st.top()<<"  "<<endl;
//         st.pop();
//     }

//     return 0;
// }


// ----------------------------------------------------------
//         REVERSE STACK
// ----------------------------------------------------------

// #include<iostream>
// #include<stack>
// using namespace std;
// void insertAtBottom(stack<int> &st,int &element){
//     // base case
//     if(st.empty()){
//         st.push(element);
//         return;
//     }
//     // ek case me solve krunnga
//     int temp=st.top();
//     st.pop();

//     // recursion
//     insertAtBottom(st,element);

//     // backtrack
//     st.push(temp);

// }
// void reverseStack(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
    
//     // 1 case me solve krunga
//     int temp=st.top();
//     st.pop();
//     // recursion
//     reverseStack(st);
    
//     // backtrack
//     insertAtBottom(st,temp);

// }
//  int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     int element=500;
//     reverseStack(st);
//     while(!st.empty()){
//         cout<<st.top()<<"  "<<endl;
//         st.pop();
//     }

//     return 0;
// }



// ----------------------------------------
// INSERT AN ELEMENT IN SORTED stack
// --------------------------------------------


// #include<iostream>
// #include<stack>
// using namespace std;
// void insertIntoSortedStack(stack<int> &st, int element){
//     // base case
//     if(st.empty()|| element>st.top()){ // isme galti karoge
//         st.push(element);
//         return;
//     }
//     int temp=st.top();
//     st.pop();

//     // recursion
//     insertIntoSortedStack(st,element);

//     // backtrack
//     st.push(temp);

// }
// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     int element=35;
//     insertIntoSortedStack(st,element);
//     while(!st.empty()){
//         cout<<st.top()<<"  ";
//         st.pop();
//     }

//     return 0;
// }


// ----------------------------------------
// SORT stack
// --------------------------------------------


#include<iostream>
#include<stack>
using namespace std;

void insertIntoSortedStack(stack<int> &st, int element){
    // base case
    if(st.empty()|| element>st.top()){ // isme galti karoge
        st.push(element);
        return;
    }
    int temp=st.top();
    st.pop();

    // recursion
    insertIntoSortedStack(st,element);

    // backtrack
    st.push(temp);

}
void sortedStack(stack<int> &st){
    // base case
    if(st.empty()){ 
        return;
    }

    int temp=st.top();
    st.pop();

    // recursion
    sortedStack(st);

    // backtrack
    insertIntoSortedStack(st,temp);

}
int main(){
    stack<int> st;
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(11);
    st.push(20);
    int element=35;
    sortedStack(st);
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }

    return 0;
}






