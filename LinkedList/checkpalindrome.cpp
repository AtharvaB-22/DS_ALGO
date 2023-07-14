//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    void print(Node* tail)
    {
        while(tail!=NULL)
        cout<<tail->data<<" ";
        cout<<endl;
    }
    int firstelement(Node* head)
    {
        return head->data;
    }
    int lastelement(Node* tail)
    {
        return tail->data;
    }
    Node* deletelastnode(Node* head)
    {
        Node* tail=head;
        Node* prev=NULL;
        while(tail!=NULL)
        {
            prev=tail;
            tail=tail->next;
        }
        prev->next=NULL;
        tail->next=NULL;
        delete(tail);
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        int start=0;
        int end=0;
        bool flag=true;
        Node* tail=head;
        while(tail!=NULL)
        tail=tail->next;
        while(head!=NULL)
        {
            start=firstelement(head);
            end=lastelement(tail);
            if(start!=end)
            {
                flag=false;
                break;
            }
            else
            {
                tail=deletelastnode(head);
                print(tail);
                head=head->next;
            }
        }
        return flag;
    }
    
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}
