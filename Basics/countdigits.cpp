//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        //code here
        int dig, count=0;
        int num=n;
        while(num>0)
        {
            dig=num%10;
            num/=10;
            cout<<dig<<endl;
            if(dig==0||n%dig==0)
            count++;
            
            cout<<num<<endl;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cout<<"Enter test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int N;
        cout<<"Enter number"<<endl;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends