#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin>>target;

    int left=0,right=0;
    int sum=0;
    while(left<=right)
    {
        sum+=arr[right];
        if(sum==target)
        {
            cout<<left+1<<" "<<right+1;
            return 0;
        }
        else if(sum<target)
        right++;
        else
        {
            left++;
            right=left;
            sum=0;
        }
    }
    return -1;
}
