// #include<iostream>
// #include<queue>
// using namespace std;

// -------------------------------------
//     USING STL FUNCTION
// --------------------------------------


// int main(){
//     // creation
//     queue<int> q;

//     // insertion
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);


//     // size
//     cout<<"size of queue:"<<q.size()<<endl;

//     // for remove
//     q.pop();


//     cout<<"size of queue:"<<q.size()<<endl;

//     if(q.empty()){
//         cout<<"Queue is Empty"<<endl;
//     }
//     else{
//         cout<<"Queue is not empty"<<endl;
//     }

//     cout<<"Front element of Queue is :"<<q.front()<<endl;
//     cout<<"Last element of Queue is :"<<q.back()<<endl;


//     return 0;
// }


// ------------------------------------------------
//       IMPLEMENT QUEUE USING ARRAY
// -----------------------------------------------------

// #include<iostream>
// using namespace std;
// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size){
//         arr=new int[size];
//         this->size=size;
//         front=-1;
//         rear=-1;
//     }

//     void push(int val){
//         // check full
//         if(rear==size-1){
//             cout<<"Queue is overflow"<<endl;
//             return;
//         }
//         // check empty case
//         if(front==-1 && rear==-1){
//             front++;
//             rear++;
//             arr[rear]=val;
//             return;
//         }
        
//         // normal case
//         rear++;
//         arr[rear]=val;
//         return;
//     }

//     void pop(){
//         // underflow condition
//         if(front==-1 && rear==-1){
//             cout<<"Queue Underflow"<<endl;
//             return;
//         }
//         if(front==rear){
//             arr[rear]=-1;
//             front=-1;
//             rear=-1;
//             return;
//         }
//         // normal case
//         arr[rear]=-1;
//         front++;
//     }

//     bool isEmpty(){
//         if(front=-1 && rear==-1){
//             return true;
//         }
//         return false;
//     }

//     int getSize(){
//         // return rear-front+1;     ->empty ke case me 1 retrun krega thats wrong so we changed it;
//         if(front==-1 && rear==-1) return 0;
//         return rear-front+1;
//     }

//     int getFront(){
//         if(front==-1){
//             cout<<"NO element in queue, cannot give front elemnt"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }

//     int getRear(){
//         if(rear==-1){
//             cout<<"NO element in queue, cannot give rear elemnt"<<endl;
//             return -1;
//         }
//         return arr[rear];

//     }

//     void print(){
//         cout<<"Printing Queue:"<<endl;
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     Queue q(5);
//     q.print();

//     q.push(10);
//     q.print();

//     q.push(20);
//     q.print();

//     q.push(30);
//     q.print();

//     q.push(40);
//     q.print();

//     q.push(50);
//     q.print();

//     // size of queue
//     cout<<"the Size of the Queue is "<<q.getSize()<<endl;

//     // for remove
//     // q.pop();
//     // q.print();

//     cout<<"the Size of the Queue is "<<q.getSize()<<endl;
//     cout<<"Queue is empty or not "<<q.isEmpty()<<endl;

//     // q.push(100);
//     // q.print();

//     // q.pop();
//     // q.pop();
//     // q.pop();
//     // q.pop();

//     // cout<<"the Size of the Queue is "<<q.getSize()<<endl;

//     // q.pop();

//     // cout<<"the Size of the Queue is "<<q.getSize()<<endl;

//     // get front element
//     cout<<"front element is "<<q.getFront()<<endl;

//     // get rear element
//     cout<<"rear element is "<<q.getRear()<<endl;

//     return 0;
// }


// ------------------------------------------------
//       IMPLEMENT CIRCULAR QUEUE USING ARRAY
// -----------------------------------------------------

// #include<iostream>
// using namespace std;
// class CQueue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     CQueue(int size){
//         arr=new int[size];
//         this->size=size;
//         front=-1;
//         rear=-1;
//     }

//     void push(int val){

//         //-> Overflow
//         //-> empty case
//         //-> circular nature
//         // ->normal flow


//         // check overflow
//         if((front==0 && rear==size-1 ) || (rear==front-1)){ // ye bhool jate hai yaad rkhna
//             cout<<"Queue is overflow"<<endl;
//             return;
//         }
//         // check empty case
//         if(front==-1 && rear==-1){
//             front++;
//             rear++;
//             arr[rear]=val;
//             return;
//         }

//         if(rear==size-1 && front!=0){
//             rear=0;
//             arr[rear]=val;
//             return;
//         }
        
//         // normal case
//         rear++;
//         arr[rear]=val;
//         return;
//     }

//     void pop(){

//         // ->overflow condition
//         // ->single elemnet
//         // ->circular nature
//         // ->normal flow

//         // underflow condition
//         if(front==-1 && rear==-1){
//             cout<<"Queue Underflow"<<endl;
//             return;
//         }
//         if(front==rear){
//             arr[rear]=-1;
//             front=-1;
//             rear=-1;
//             return;
//         }

//         // circular nature
//         if(front==size-1){
//             arr[front]==-1;
//             front=0;
//             return;
//         }

//         // normal case
//         arr[front]=-1;
//         front++;
//         return;
//     }

//     bool isEmpty(){
//         if(front=-1 && rear==-1){
//             return true;
//         }
//         return false;
//     }

//     int getSize(){
//         // return rear-front+1;     ->empty ke case me 1 retrun krega thats wrong so we changed it;
//         if(front==-1 && rear==-1) return 0;
//         return rear-front+1;
//     }

//     int getFront(){
//         if(front==-1){
//             cout<<"NO element in queue, cannot give front elemnt"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }

//     int getRear(){
//         if(rear==-1){
//             cout<<"NO element in queue, cannot give rear elemnt"<<endl;
//             return -1;
//         }
//         return arr[rear];

//     }

//     void print(){
//         cout<<"Printing Circular Queue:"<<endl;
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
//    CQueue q(5);
//    q.print();

//     q.push(10);
//     q.print();
//     q.push(20);
//     q.print();
//     q.push(30);
//     q.print();
//     q.push(40);
//     q.print();
//     q.push(50);
//     q.print();
//     // q.push(60);
//     // q.print();

//     q.pop();
//     q.pop();
//     q.pop();
//     q.print();

//     q.push(60);
//     q.print();
//     q.push(70);
//     q.print();
//     q.push(80);
//     q.print();

//     q.push(90);
//     q.print();


//     return 0;
// }

// -----------------------------------------------------
//     Doubly Ended Queue OR Deque
// ----------------------------------------------------

// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> dq;
//     // -> for push in back
//     dq.push_back(10);
//     dq.push_back(20);

//     // -> for push in front
//     dq.push_front(30);
//     dq.push_front(60);

//     // ->for pop frm back
//     dq.pop_back();
//     // -> for pop from front
//     dq.pop_front();
//     cout<<"size of deque is "<<dq.size()<<endl;
//     cout<<"front element  is "<<dq.front()<<endl;
//     cout<<"rear element  is "<<dq.back()<<endl;


//     return 0;
// }

// -----------------------------------------------------
//    IMPLEMENTATION OF Doubly Ended Queue OR Deque
// ----------------------------------------------------


#include<iostream>
using namespace std;
class Deque{
    int *arr;
    int size;
    int front;
    int rear;
    Deque(int size){
        arr=new int(size);
        this->size=size;
        front=-1;
        rear=-1;
    }

    void pushBack(int val){
        // check overflow
        if((front==0 && rear==size-1 ) || (rear==front-1)){ // ye bhool jate hai yaad rkhna
            cout<<"Queue is overflow"<<endl;
            return;
        }
        // check empty case
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
            return;
        }

        if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=val;
            return;
        }
        
        // normal case
        rear++;
        arr[rear]=val;
        return;
    }

    void pushFront(int val){
        // check overflow
        if((front==0 && rear==size-1 ) || (rear==front-1)){ // ye bhool jate hai yaad rkhna
            cout<<"Queue is overflow"<<endl;
            return;
        }
        // empty cse
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=val;
            return;
        }
        if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=val;
            return;
        }

        // normal flow
        front--;
        arr[front]=val;
    }

    void popFront(){
        // underflow condition
        if(front==-1 && rear==-1){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        if(front==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
            return;
        }

        // circular nature
        if(front==size-1){
            arr[front]==-1;
            front=0;
            return;
        }

        // normal case
        arr[front]=-1;
        front++;
        return;
    }

    void popBack(){
        // underflow condition
        if(front==-1 && rear==-1){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        if(front==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
            return;
        }
         // circular nature
        if(rear==0){
            arr[rear]==-1;
            rear=size-1;
            return;
        }

        // normal case
        arr[rear]=-1;
        front--;
        return;
    }
}

