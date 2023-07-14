//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        int i,dig=0;
        long long binnum=0;
        for(i=1;i<=32;i++)
        {
        int digit=X%2;
        binnum=binnum*10+digit;
        X=X/2;// stored in reverse format already
        // binary representation
        }
        cout<<binnum<<endl;
        long long copybinnumber=binnum;
        long long decnumber=0;
        i=0;
        while(copybinnumber>0)
        {
            dig=copybinnumber%10;
            decnumber+=dig*pow(2,i);
            i++;
            cout<<decnumber<<endl;
            copybinnumber/=10;
        }
        return decnumber;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}