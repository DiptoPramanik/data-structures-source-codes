#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    ///constructor
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};



void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next!=NULL)
        cout<<"->";
        n = n->Next;
    }
    cout<<endl;
}

void insertAtTail(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->Next!=NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = newNode;
}

void insertAtHead(Node* &head,int val)
{
    ///step-1 : new node creation
    Node *newNode = new Node(val);

    ///step-2 : update of newnode->Next
    newNode->Next = head;

    ///step-3 : update of head
    head = newNode;
}

int main()
{
    Node *head=NULL;
    ///insertAtTail(head,1);
    ///insertAtTail(head,5);
    ///insertAtTail(head,8);
    ///insertAtTail(head,9);

    int n;
    ///choice 1 : Insert  at tail
    ///choice 2 : Insert  at head

    cout<<"Choice 1 : Insertion at head"<<endl<<"Choice 2 : Insertion at tail"<<endl<<"Choice 3 : Exit"<<endl;

    int choice = 2;
    while(choice==1 || choice==2)
    {
        cout<<"Enter the value : ";
        cin>>n;
        if(choice==1)
        {
            insertAtHead(head,n);
        }
        else if(choice==2)
        {
            insertAtTail(head,n);
        }
        else
        {
            break;
        }
        cout<<"next choice : ";
        cin>>choice;
    }
    /*char choice = 'Y';
    while(choice=='Y')
    {
        int n;
        cout<<"Enter the value : ";
        cin>>n;
        insertAtTail(head,n);
        cout<<"Do you wanna continue again!press(Y/N) : "<<endl;
        cin>>choice;
    }*/


    ///Node *second=new Node();
    ///Node *third=new Node();
    ///Node *fourth=new Node();

    ///head->value=1;
    ///second->value=5;
    ///third->value=8;
    ///fourth->value=9;

    ///head->Next = second;
    ///second->Next = third;
    ///third->Next = fourth;
    ///fourth->Next = NULL;

    display(head);
    return 0;
}



