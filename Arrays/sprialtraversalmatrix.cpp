#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int n,m;
    //cin>>"Enter size of matrix";
    cin>> n >> m;
    int arr[n][m];
    int i,j;
    int rowstart=0,rowend=n-1,colstart=0,colend=m-1;
    // cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    // spiral matrix print
    while(rowstart<=rowend&&colstart<=colend)
    {
        for(i=colstart;i<=colend;i++)
        cout<<arr[rowstart][i]<<" ";
        rowstart++;
        cout<<endl;
        for(i=rowstart;i<=rowend;i++)
        cout<<arr[i][colend]<<" ";
        colend--;
        cout<<endl;
        for(i=colend;i>=colstart;i--)
        cout<<arr[rowend][i]<<" ";
        rowend--;
        cout<<endl;
        for(i=rowend;i>=rowstart;i--)
        cout<<arr[colstart][i]<<" ";
        colstart++;
        cout<<endl;
    }
    return 0;
}