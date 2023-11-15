
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        cout << "default constructor called"<<endl;
        this->next = NULL;
    }
    Node(int data)
    {
        cout << "parameterised constructor called" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void PrintLinkedList(Node *head)
{
    // hm kabhi bhi LL ko traverse krne ke liye original pointer ka use nahi karenge
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{ // bhaiya ne yahan mistake kithi , pass by reference krna hai
    // create a node
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        // empty LL
        head = newNode;
        tail = newNode;
    }
    else
    {
        // attach new node to head
        newNode->next = head;
        // update head
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // emplty
        // step1:create node
        Node *newNode = new Node(data);
        // step2: signel node hai entire list me ,that why head and tail is per point krenge
        head = newNode;
        tail = newNode;
    }
    else
    {
        // non emplty LL
        // step1:create new node
        Node *newNode = new Node(data);
        // step2: tail Node ko attack kro newnode se
        tail->next = newNode;
        // step3: update tail
        tail = newNode;
    }
}
int getLength(Node* head){
    Node* temp=head;
    int length=0;
    while(temp->next!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void InsertAtPosition(Node* &head,Node* &tail,int data,int position){
    int length=getLength(head);
    if(position<=1){
        insertAtHead(head,tail,data);
    }
    else if(position>length){        //yahan pr mistake kithi position==lenght kiya tha 
        insertAtTail(head,tail,data);
    }
    else{
        // insert at middle of LL
        // step1:create a new node
        Node* newNode= new Node(data);
        // step2:tranverse prev and curr to position
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        // attach previos to new node
        prev->next=newNode;
        // attack new node to curr
        newNode->next=curr;
    }

}

int main()
{
    cout << "i am inside main functions" << endl;
    // Node a;     //static allocation
    Node *first = new Node(1);  // dynamic allocation
    Node *second = new Node(2); // dynamic allocation
    Node *third = new Node(3);
    Node *forth = new Node(4);
    Node *fifth = new Node(5);
    Node *tail = fifth;

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    // linked list create hochuki hai

    Node *head = first;

    cout << "tranverse the entire LL:" << endl;
    PrintLinkedList(head);

    insertAtHead(head, tail, 500);
    PrintLinkedList(head);

    insertAtTail(head, tail, 599);
    PrintLinkedList(head);


    InsertAtPosition(head,tail,10,1);
    PrintLinkedList(head);

    InsertAtPosition(head,tail,1090,29);
    PrintLinkedList(head);

    InsertAtPosition(head,tail,2021,799);
    PrintLinkedList(head);

    InsertAtPosition(head,tail,2021,-3);
    PrintLinkedList(head);


    // InsertAtPosition(head,tail,10,5);
    // PrintLinkedList(head);

    // InsertAtPosition(head,tail,10000,1);
    // PrintLinkedList(head);

    // InsertAtPosition(head,tail,7000,2);
    // PrintLinkedList(head);

    return 0;
}