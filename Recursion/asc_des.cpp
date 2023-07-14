#include<bits/stdc++.h>
using namespace std;

void asc(int n)
{
    if(n==0)
    return ;
    asc(n-1);
    cout<<n<<endl;
}

void desc(int n)
{
    if(n==0)
    return ;
    cout<<n<<endl;
    desc(n-1);
}
int main()
{
    int n=7;
    asc(n);
    return 0;
}