#include<bits/stdc++.h>
using namespace std;

/* n^p= n*n*n...... p times
    n^p=n*n^p-1
    n^p-1=n*n^p-2
*/


int power(int n,int p)
{
    if(p==0)
    return 1;
    int prevval=power(n,p-1);
    return n* prevval;
}
int main()
{
    int n,p;
    cin>>n;
    cin>>p;

    int multiplication=power(n,p);

    cout<<"The value of " <<n<<" raised to the power "<<p<<" is: " << multiplication<<endl;
    return 0;
}