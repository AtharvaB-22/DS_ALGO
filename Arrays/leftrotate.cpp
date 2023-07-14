//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void rotate(vector<int>& nums, int k) 
	{ 
	   // Your code goes here
	int n=nums.size();
    if(n%2==0)
    {
        sorteven(nums,n,k);        
    }
    else
    sortodd(nums,n,k);
}
void sorteven(vector<int>& nums,int n,int k)
{
    int i;
    int a[n];
    int index=0;
    for(i=k;i<n;i++)
        {
            nums[index]=a[i];
            ++index;
        }
        for(i=0;i<k;i++)
        {
            nums[index]=a[i];
            ++index;
        }
}
void sortodd(vector<int>& nums,int n,int k)
{
    int i;
    int a[n];
    int index=0;
    if(k==0||k==n)
    k=-1;
    for(i=k+1;i<n;i++)
        {
            nums[index]=a[i];
            ++index;
        }
        for(i=0;i<=k;i++)
        {
            nums[index]=a[i];
            ++index;
        }
}
};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.rotate(a,n,k);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends