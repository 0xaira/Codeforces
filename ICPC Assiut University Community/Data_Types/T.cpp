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

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {

            cout << "*";
        }

        // for (int j = 0; j < N - i - 1; j++)
        // {
        //     cout << " ";
        // }

        cout << endl;
    }
}