#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue<int> &q){
    stack<int> st;
    // one by one queue se element lo and stack me dalo
    while(!q.empty()){
        int frontElement=q.front();
        q.pop();

        st.push(frontElement);
    }
    // one by one stack se lo and queue me insert kro
    while(!st.empty()){
        int frontElement=st.top();
        st.pop();
        q.push(frontElement);
    }
}
void print(queue<int> q){
    while(!q.empty()){
        int element=q.front();
        cout<<element<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"-------------------------\n";
}
// int main(){

//     // ------------------
//     // REVERSE A QUEUE
//     // -----------------
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     cout<<"befor reverse :"<<endl;
//     print(q);
//     reverseQueue(q);
//     cout<<"after reverse:"<<endl;
//     print(q);
//     return 0;
// }



// ---------------------------------------------
//         REVERSE FIRST K ELEMENT FROM QUEUE
// -----------------------------------------------

void reverseFirstK(queue<int> &q,int k){
    stack<int> st;
    int n=q.size();
    if(k>n || k==0){
        return;
    }
    // push first k element into stack
    for(int i=0;i<k;i++){
        int temp=q.front();
        q.pop();
        st.push(temp);
    }

    // push all k element into queue
    while(!st.empty()){
        int temp=st.top();
        st.pop();
        q.push(temp);

    }
    
    // pop and push first (n-k) elements into queue again
    for(int i=0;i<(n-k);i++){
        int temp=q.front();
        q.pop();
        q.push(temp);
    }


}

// int main(){

//     // ------------------
//     // REVERSE A QUEUE
//     // -----------------
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     cout<<"Before reverse:"<<endl;
//     print(q);
//     reverseFirstK(q,2);
//     cout<<"after reverse:"<<endl;
//     print(q);
//     return 0;
// }

// ---------------------------------------------------
//         INTERLEAVE FIRST AND SECOND HALF QUEUES
// ---------------------------------------------------


// EX:     ________________________        ________________________
//         |10|20|30|40|50|60|70|80|   ->  |10|50|20|60|30|70|40|80|

void interLeaveQueue(queue<int> &first){
    queue<int > second;
    // PUSH FIRST HALF OF FIRST QUESUE IN SECOND QUEUE
    int size=first.size();
    for(int i=0;i<size/2;i++){
        int temp=first.front();
        first.pop();
        second.push(temp);
    }

    // MERGE BOTH THE QUEUE
    // into the original queue - named as first 
    for(int i=0;i<size/2;i++){
        int temp=second.front();
        second.pop();
        first.push(temp);

        temp=first.front();
        first.pop();
        first.push(temp);
    }
}


// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);
//     q.push(80);
//     cout<<"Before reverse:"<<endl;
//     print(q);
//     interLeaveQueue(q);
//     cout<<"after reverse:"<<endl;
//     print(q);
//     return 0;
// }


void printFirstNegative(int *arr,int n,int k){
    deque<int> dq;

    // process first k element ->first widnow
    for(int i=0;i<k;i++){
        int element=arr[i];
        if(element<0){
            dq.push_back(i);
        }
    }

    // process remaining windows -> removal an Addition
    for(int i=k;i<n;i++){
        // aage badne se pehle purani window ka ans nikalo
        if(dq.empty()){
            cout<<"0"<<endl;
        }
        else{
            cout<<arr[dq.front()]<<" ";
        }
        // removal-> jo bhi index out of range hai ,usko queue se remove krdo
        if(i-dq.front()>=k){
            dq.pop_front();
        }
        // addition
        if(arr[i]<0){
            dq.push_back(i);
        }


    }
        // last window ka ans print krdo
        if(dq.empty()){
            cout<<"0"<<endl;
        }
        else{
            cout<<arr[dq.front()]<<" ";
        }
}    

int main(){
    int arr[]={2,-5,4,-1,-2,0,5};
    int size=7;
    int k=3;
    printFirstNegative(arr,size,k);
    return 0;
}

