
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

signed main()
{
    ios ::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s = to_string(n); 
        reverse(s.begin(), s.end());    
        for (int i = 0; i < s.length(); i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}