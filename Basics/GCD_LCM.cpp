//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
        //long long minimum=0,maximum=0;
        long long gcd=1;
        long long lcm=1;
        long long product=a*b;
        vector<long long> arr;
        // while(minimum>0)
        // {
        //     if(a%minimum==0)
        //     {
        //         if(b%minimum==0)
        //         {
        //             gcd=minimum;
        //             break;
        //         }
        //     }
        //     minimum--;
        // } 
        gcd=GCD(a,b);
        lcm=product/gcd; 
        arr.insert(arr.begin(),lcm);   
        arr.insert(arr.begin()+1,gcd);
        return arr;
    }
    long long GCD(long long a, long long b)
    {
        long long minimum=min(a,b);
        long long maximum=max(a,b);
        if(minimum==0)
        return maximum;
        return GCD(minimum,maximum%minimum);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    //cout <<"Enter number of test cases "<<endl;
    cin >> t;
    while (t--) {
        long long A,B;
        //cout <<"Enter values "<<endl;
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends