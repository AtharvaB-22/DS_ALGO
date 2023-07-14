//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> arr;
        int i=0,j=0;
        int index=0;
        while(i<n&&j<m)
        {
            if(arr1[i]<=arr2[j])
            {
                if(arr1[i]>arr.back()||arr.size()==0)
            {
                arr.push_back(arr1[i]);
                i++;
                //cout<<arr.back();
            }
            
            else
            {
                arr.push_back(arr2[j]);
                j++;
                //cout<<arr.back()<<"Element entered from 2"<<endl;
            }
            }
            else
            {
                if(arr2[j]>arr.back()||arr.size()==0)
            {
                arr.push_back(arr2[j]);
                j++;
                //cout<<arr.back();
            }
            
            else
            {
                arr.push_back(arr1[i]);
                j++;
                //cout<<arr.back()<<"Element entered from 2"<<endl;
            }
                
            }
        }
        while(i<n)
        {
            if(arr.back()<arr1[i])
            {
            arr.push_back(arr1[i]);
            //cout<<arr.back();
            }
            i++;
        }
        while(j<m)
        {
            if(arr.back()<arr2[j])
            {
                arr.push_back(arr2[j]);
               //  cout<<arr.back();   
            }
            j++;
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
    cout<<"Enter test cases"<<endl;
	cin >> T;
	
	while(T--){
	    int N, M;
        cout<<"enter size n , m"<<endl;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    cout<<"Enter array elements for array 1"<<endl;
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    cout<<"Enter array elements for array 2"<<endl;
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}