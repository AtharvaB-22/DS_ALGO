#include <iostream>
#include <unordered_set>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int i;
    unordered_set<int> s;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e6;
    vector<int> iter(N, -1);
    int minim = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (iter[arr[i]] == -1)
            iter[arr[i]] = i;
        else
            minim = min(minim, iter[arr[i]]);
    }
    cout << (minim == INT_MAX ? -1 : minim) << endl; // Handle case where minim is still INT_MAX
    return 0;
}
