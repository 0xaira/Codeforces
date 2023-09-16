#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int evenCount = 0;
    int oddCount = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if (oddCount == evenCount)
    {
        cout << 0 << endl;
    }
    else if (n%2 !=0){
        cout<<-1<<endl;
    }
    else
    {
        cout<<abs(evenCount- oddCount)/2<<endl;
    }
}

signed main()
{
    ios ::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}