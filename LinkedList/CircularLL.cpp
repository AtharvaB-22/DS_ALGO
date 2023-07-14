#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void InsertatHead(Node* &head,int data)
{
    Node* newnode=new Node(data);
    Node* temp=head;
    if(head==NULL)
    {
        newnode->next=newnode;
        head=newnode;
        return;
    }
    while(temp->next!=head);
        temp=temp->next;
    
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
}

void Insertatend(Node* &head,int data)
{
    Node* newnode=new Node(data);
    Node* temp=head;
    if(head==NULL)
    {
        InsertatHead(head,data);
        return;
    }
    else
    {   
        while(temp->next!=head);
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
void Insertatposition(Node* &head,int pos,int data)
{
    int cnt=1;
    Node* temp=head;

    // Inserting at 1st position
    if(pos==1)
    {
        InsertatHead(head,data);
        return;
    }
    while(cnt<pos-1)
    {
        cnt++;
        temp=temp->next;
    }
    if(temp->next==head)
    {
        Insertatend(head,data);
        return;
    }
    //Inserting at last position;
    Node* ptr=new Node(data);
    ptr->next=temp->next;
    temp->next=ptr;
}

void printLL(Node* &head)
{
    Node* ptr =head;

    do
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    while(ptr!=head);
    cout<<endl;
}

int main()
{
    Node* head=NULL;
    Insertatend(head,22);
    Insertatend(head,28);
    printLL(head);
}