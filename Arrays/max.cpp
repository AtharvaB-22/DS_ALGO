#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maximum(int arr[],int n)
    {
        int  i,maxele=-1;
        for(i=0;i<n;i++)
        maxele=max(maxele,arr[i]);
        return maxele;
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
    int max=ob.maximum(a,n);
    cout<<max<<endl;
	    cout << "\n";
	     
}


