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

void Insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
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

    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=temp;
}
void Insertatposition(Node* &head,int pos,int data)
{
    int cnt=1;
    Node* temp=head;

    // Inserting at 1st position
    if(pos==1)
    {
        Insertathead(head,data);
        return;
    }
    while(cnt<pos-1)
    {
        cnt++;
        temp=temp->next;
    }
    //Inserting at last position;
    Node* ptr=new Node(data);
    ptr->next=temp->next;
    temp->next=ptr;
}

void deletenode(int pos,Node* &head)
{
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    if(pos==1)
    {
        prev=head;
        head=head->next;
        //free memory of the deleted node
        prev->next=NULL;
        delete(prev);
    }
    else
    {
        while(cnt<pos)
        {
            cnt++;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        curr->next=NULL;
        delete (curr);
    }
}
Node* reverseLL(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;

    if(head==NULL||head->next==NULL)
    return head;

    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
void printLL(Node* & head)
{
    Node* ptr =head;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    Node* node1=new Node(15);
    Node* head=node1;
    Insertathead(head,11);
    Insertatend(head,22);
    Insertatend(head,28);
    Insertatposition(head,3,35);
    printLL(head);
    cout<<endl;

    deletenode(2,head);
    printLL(head);
    cout<<endl;

    head=reverseLL(head);
    printLL(head);

}