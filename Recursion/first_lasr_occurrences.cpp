#include<bits/stdc++.h>
using namespace std;

int f_occurrence(int arr[], int n, int i, int key)
{
    if(arr[i]==key)
    return i;
    if(i>n)
    return -1;
    return f_occurrence(arr,n,i+1,key);
}
int last_occ(int arr[],int n,int i, int key)
{
    if(arr[i]==key)
    return i;
    if(i<0)
    return -1;
    return last_occ(arr,n,i-1,key);
}
int main()
{
    int arr[]={1,2,3,9,5,2,6,3};
    int key=2;
    int f_index=f_occurrence(arr,8,0,key);
    int l_index=last_occ(arr,8,7,key);
    cout<<f_index<<"  "<<l_index<<endl;
    return 0;
}