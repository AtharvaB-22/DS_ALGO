#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int  longestsubarray(int arr[],int n)
    {
        int length=2,maxlength=0,cdifference=0,ndifference=0;
        int i;
        cdifference=arr[1]-arr[0];
        for(i=2;i<n;i++)
        {
            ndifference=arr[i]-arr[i-1];
            cdifference=arr[i-1]-arr[i-2];
            if(cdifference==ndifference)
            {
                length++;
                maxlength=max(maxlength,length);
            }
            else
            length=2;
        }
        return maxlength;
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
    int max=ob.longestsubarray(a,n);
    cout<<max<<endl;
	    cout << "\n";
	     
}