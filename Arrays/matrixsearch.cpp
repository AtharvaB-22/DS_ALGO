#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int n,m;
    //cin>>"Enter size of matrix";
    cin>> n >> m;
    int arr[n][m];
    int i,j;
    int target;
    cin>>target;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int r=0,c=n-1;
    int top=arr[r][c];
    bool flag=false;
    while(r<n&&c>=0)
    {
        if(top==target)
        {
            flag=true;
            break;
        }
        else if(top<target)
        c--;
        else
        r++;
    }
    if(flag)
    cout<<"Element found"<<endl;
    else
    cout<<"Element not found"<<endl;
    return 0;
}