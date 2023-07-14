#include<bits/stdc++.h> 
using namespace std;

/*
Matrix Transpose
123             147
456    ------>  258
789             369

for transposing, only upper triangle is needed,rest is transposed by itself 
*/

int main()
{
    int n,m;
    //cin>>"Enter size of matrix";
    cin>> n >> m;
    int arr[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int transpose[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


