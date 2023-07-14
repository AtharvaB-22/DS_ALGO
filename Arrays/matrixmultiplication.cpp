#include<bits/stdc++.h> 
using namespace std;

/*
    3x4 and 4x3  -> 3x3
    2412    123           33 42 51
    8436    456  ------>  69 90 111  
    1795    789           112 134 156
            456
*/
 int main()
{
    int n1,n2,n3;
    //cin>>"Enter size of matrix";
    cin>> n1 >> n2>> n3;
    int arr1[n1][n2];
    int arr2[n2][n3];
    int mul[n1][n3];
    int i,j,k;
    // Enter 1st matrix
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        cin>>arr1[i][j];
    }
    // Enter 2nd Matrix
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n3;j++)
        cin>>arr2[i][j];
    }
    // Multiplied matrix
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            int sum=0;
          for(k=0;k<n2;k++) 
          sum+=arr1[i][k]*arr2[k][j];
          mul[i][j]=sum;
        }
    }
    // printing multiplied matrix
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

