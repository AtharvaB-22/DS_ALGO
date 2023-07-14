#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void subarray(int arr[],int n)
    {
        int i, j;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                cout<<arr[i]<<" "<< arr[j]<<" "<<endl;
            }
        }
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
    ob.subarray(a,n);
    //cout<<max<<endl;
	    cout << "\n";
	     
}