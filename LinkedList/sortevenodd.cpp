//{ Driver Code Starts
//Initial template for C++

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
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* insertatend(Node* head,int value)
    {
        Node* newnode=new Node(value);
        Node* temp=head;
        if(head==NULL)
        {
            newnode->next=head;
            head=newnode;
        }
        else
        {
            while(temp!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        return head;
    }
    Node* divide(int N, Node *head){
        // code here
        Node *temp=head;
        Node* odd=NULL;
        Node* even=NULL;
        while(temp!=NULL)
        {
            if(temp->data%2==1)
            {
                odd=insertatend(odd,temp->data);
            }
            else
            {
                even=insertatend(even,temp->data);
            }
        }
        printList(odd);
        printList(even);

        return head;    
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cout<<"Enter value of T"<<endl;
    cin>>t;
    while(t--){
        int N;
        cout<<"Enter size of LL"<<endl;
        cin>>N;
        cout<<"Enter LL values"<<endl;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}