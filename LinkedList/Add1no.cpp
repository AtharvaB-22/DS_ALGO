
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 

class Solution
{
    public:
    Node* reverseLL(Node* head)
    {
         Node* prev=NULL;
           Node* curr=head;
           Node* forw=NULL;
           while(curr!=NULL)
           {
               forw=curr->next;
               curr->next=prev;
               prev=curr;
               curr=forw;
           }
           return prev; 
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* ans=new Node(-1);
        Node* ptr=ans;
        Node* rev=reverseLL(head);
        Node* temp=rev;
        int sum=0,carry=0,digit=0;
        if(temp->data!=9)
        {
            sum=temp->data+1;
            digit=sum%10;
            Node* newnode=new Node(digit);
            ptr->next=newnode;
            ptr=ptr->next;
            temp=temp->next;
            while(temp!=NULL)
            {
                sum=temp->data+carry;
                digit=sum%10;
                 Node* newnode=new Node(digit);
                ptr->next=newnode;
                ptr=ptr->next;
                temp=temp->next;
                if(sum>9)
                carry=1;
                else
                carry=0;
            }
        }
        else
        {
            Node* newnode=new Node(0);
            ptr->next=newnode;
            ptr=ptr->next;
            temp=temp->next;
            carry=1;
            while(temp!=NULL)
            {
                sum=temp->data+carry;
                digit=sum%10;
                 Node* newnode=new Node(digit);
                ptr->next=newnode;
                ptr=ptr->next;
                temp=temp->next;
                if(sum>9)
                carry=1;
                else
                carry=0;
            }
        }
        if(carry==1)
        {
            Node* newnode=new Node(1);
            ptr->next=newnode;
            ptr=ptr->next;
        }
        ans=ans->next;
        Node* result=reverseLL(ans);
        return result;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 