//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>positive;
	    vector<int>negative;
	    int i;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        positive.emplace_back(arr[i]);
	        else
	        negative.emplace_back(arr[i]);
	    }
	    int possize=positive.size();
	    int negsize=negative.size();
	    int pos=0,neg=0;
	    int index=0;
	   // cout<<possize<<endl;
	   // cout<<negsize<<endl;
	    while(pos<possize&&neg<negsize)
	    {
	        if(index%2==0)
	        {
	            arr[index]=positive[pos];
	            ++pos;
	        }
	        else
	        {
	            arr[index]=negative[neg];
	            ++neg;
	        }
	        ++index;
	    }
	   // cout<<pos<<endl;
	   // cout<<neg<<endl;
	   // cout<<index<<endl;
	    while(index<n)
	    {
	    while(pos<possize)
	    {
	        arr[index++]=positive[pos];
	        pos++;
	    }
	    while(neg<negsize)
	    {
	        arr[++index]=negative[neg];
	        neg++;
	    }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}