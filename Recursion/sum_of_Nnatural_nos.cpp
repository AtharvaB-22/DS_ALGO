/* Recursion can be defined as a function which calls itself to make the program smaller */

#include <bits/stdc++.h>
using namespace std;


// program to find the sum of N natural nos using recursion

int sum(int n)
{
    if(n==0)
    return 0;
    return n+ sum(n-1);
}
int main()
{
    // Enter the value of n

    int n;
    cin>>n;

    int sumN=sum(n);

    cout<<"The sum of n natural numbers is: " << sumN<<endl;
    return 0;
}
