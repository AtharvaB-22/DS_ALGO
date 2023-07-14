#include <bits/stdc++.h>
using namespace std;

// Check for a palindrome

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    bool flag=false;
    int front=0,last=n-1;
    while(front<=last)
    {
        if(arr[front]==arr[last])
        {
            flag=true;
            front++;
            last--;
            cout<<flag<<endl;
        }
        else
        break;     
    }
    if(flag)
    cout<<"Palindrome:"<<arr;
    else
    cout<<"Not a Palindrome: "<<arr;
    return 0;
}