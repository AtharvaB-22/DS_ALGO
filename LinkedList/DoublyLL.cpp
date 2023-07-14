#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* curr;
    Node* prev;

    Node(int data)
    {
        this->data=data;
        this->curr=NULL;
        this->prev=NULL;
    }
};

void Insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    temp->curr=head;
    head->prev=temp;
    head=temp;
}
 
void Insertatend(Node* &head,int data)
{
    if(head==NULL)
    {
    Insertathead(head,data);
    return;
    }
    Node* temp=new Node(data);
    Node* ptr=head;
    while(ptr->curr!=NULL)
    ptr=ptr->curr;

    ptr->curr=temp;
    temp->prev=ptr;
}

void Insertatposition(Node* &head,int pos,int data)
{
    int cnt=1;
    Node* ptr2=head;
    Node* ptr1;

    // Inserting at 1st position
    if(pos==1)
    {
        Insertathead(head,data);
        return;
    }
    while(cnt<pos)
    {
        cnt++;
        ptr1=ptr2;
        ptr2=ptr2->curr;
    }

    //Inserting at last position;
    Node* temp=new Node(data);
    temp->curr=ptr1->curr;
    ptr1->curr=temp;
    temp->prev=ptr1;
    ptr2->prev=temp;
}

void deletenode(int pos,Node* &head)
{
    Node* ptr2=head;
    Node* ptr1=NULL;
    Node* ptr3=NULL;
    int cnt=1;
    if(pos==1)
    {
        ptr1=head;
        head=head->curr;
        head->prev=NULL;
        ptr1->curr=NULL;
        //free memory of the deleted node
        delete(ptr1);
    }
    else
    {
        while(cnt<pos)
        {
            cnt++;
            ptr1=ptr2;
            ptr2=ptr2->curr;
        }
        ptr3=ptr2->curr;
        if(ptr3==NULL)
        {
            ptr1->curr=NULL;
            ptr2->prev=NULL;
            ptr2->curr=NULL;
            delete(ptr2);
            return;
        }
        ptr3->prev=ptr2->prev;
        ptr1->curr=ptr3;
        ptr2->prev=NULL;
        ptr2->curr=NULL;
        delete(ptr2);
    }
}

int getlength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->curr;
    }
    return len;
}

void printLL(Node* & head)
{
    Node* ptr =head;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" <=> ";
        ptr=ptr->curr;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* node1=new Node(15);
    Node* head=node1;
    Insertathead(head,22);
    Insertatend(head,17);
    Insertatend(head,35);
    Insertatposition(head,3,19);
    Insertatposition(head,5,31);
    Insertatposition(head,6,39);
    Insertatposition(head,1,7);
    printLL(head);
    deletenode(1,head);
    deletenode(5,head);
    deletenode(6,head);
    printLL(head);
}