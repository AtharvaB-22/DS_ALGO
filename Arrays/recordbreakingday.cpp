#include<bits/stdc++.h>
using namespace std;
/*
record breaking day
strictly greater than all the previous values
strictly greater than the following day
*/
class Solution
{
    public:
    int  recordbreakingday(int arr[],int n)
    {
        int count=0;
        int i,j,maximum=INT_MIN;
        for(i=0;i<n;i++)
        {
            maximum=max(maximum,arr[i]);
            if(arr[i]==0&&arr[0]>arr[1])
            {
            count++;
            continue;
            }
            if(arr[i]==maximum&&arr[i]>arr[i+1])
            {
            count++;
            continue;
            }
            if(arr[i]==n-1&&arr[i]==maximum)
            count++;
        }
        
        return count;
    }
};
int main()
{
    int n;
	cin >> n;
	int a[n];
     for(int i = 0;i<n;i++){
       cin >> a[i];
	    }
    Solution ob;
    int max=ob.recordbreakingday(a,n);
    cout<<"The count is: "<<max<<endl;
	    cout << "\n";	     
}