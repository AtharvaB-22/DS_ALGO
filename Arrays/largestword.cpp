#include <bits/stdc++.h>
using namespace std;

// Largest length
// Largest word

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n); // To store a string 
   // cin.ignore();// similar to flush func to clear the buffer 
    int i=0, maximum=-1,current=0;
    int st=0,maxst=-1;
    while(1)
    {
        
        if(arr[i]==' '||arr[i]=='\0')
        {
            maximum=max(maximum,current);
            current=0;
            maxst=st;
            st=i+1;
         //   cout<<current<<endl;
        }
        else
        {
            ++current;
        }
        if(arr[i]=='\0')
        break;
        
        i++;
    }
    cout<<maximum<<endl;
    for(i=0;i<maximum;i++)
    cout<<arr[i+maxst];
    return 0;
}


    