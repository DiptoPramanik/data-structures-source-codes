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

int main()
{
    Node *head=NULL;
    ///insertAtTail(head,1);
    ///insertAtTail(head,5);
    ///insertAtTail(head,8);
    ///insertAtTail(head,9);


    char choice = 'Y';
    while(choice=='Y')
    {
        int n;
        cout<<"Enter the value : ";
        cin>>n;
        insertAtTail(head,n);
        cout<<"Do you wanna continue again!press(Y/N) : "<<endl;
        cin>>choice;
    }


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


