
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
    ~Node(){
        cout<<"destructor called  for "<<this->data<<endl;
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
int getLength(Node* &head){
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        temp=temp->next;
        length++;
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

void deleteNode(Node* &head,Node* &tail,int position){

    // empty list
    if(head==NULL){
        cout<<"Connot delete, List is empty"<<endl;
        return;
    }

    if(head==tail){
        // single element
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    
    int len=getLength(head);
    // delete from head
    if(position==1){
        // first node ko delete krdo
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==len){
        // last node ko deelte krdo
        
        // find prev
        Node* prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }

        // prev node ka link null kro
        prev->next=NULL;

        // node delete kro
        delete tail;

        // update tail
        tail=prev;
        
    }
    else{
        // middle se node delete kro

        // step1: set krdo prev/curr pointers ko
        Node* prev=NULL;
        Node* curr=head;
        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;
        }

        // step2: prev->next me curr ka next node add kro
        prev->next=curr->next;

        // step3: node isolate krdo
        curr->next=NULL;
        // step4: delete node
        delete curr;
    }
}

int main()
{
    cout << "i am inside main functions" << endl;
    // Node a;     //static allocation
    Node *first = new Node(100);  // dynamic allocation
    Node *second = new Node(200); // dynamic allocation
    Node *third = new Node(300);
    Node *forth = new Node(400);
    Node *fifth = new Node(500);
    Node *tail = fifth;

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    // linked list create hochuki hai

    Node *head = first;

    cout << "tranverse the entire LL:" << endl;
    PrintLinkedList(head);

    // insertAtHead(head, tail, 500);
    // PrintLinkedList(head);

    // insertAtTail(head, tail, 599);
    // PrintLinkedList(head);


    // InsertAtPosition(head,tail,10,1);
    // PrintLinkedList(head);

    // InsertAtPosition(head,tail,1090,29);
    // PrintLinkedList(head);

    // InsertAtPosition(head,tail,2021,799);
    // PrintLinkedList(head);

    // InsertAtPosition(head,tail,2021,-3);
    // PrintLinkedList(head);

    // ------------------------------------------------------------------------------
    // testing for deletion
    // --------------------------------------------------------------------------------

    // deleteNode(head,tail,1);
    // deleteNode(head,tail,5);
    deleteNode(head,tail,3);
    PrintLinkedList(head);


    return 0;
}