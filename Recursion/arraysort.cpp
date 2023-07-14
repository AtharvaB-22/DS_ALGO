#include<bits/stdc++.h>
using namespace std;
bool arraysort(int arr[],int n)
{
    if(n==1)
    return true;
    bool remainingarray=arraysort(arr+1,n-1);

    return (arr[0]<arr[1] && remainingarray);
}
int main()
{
    int arr[]={1,2,3,9,5};
    cout<<arraysort(arr,5)<<endl;
    return 0;
}