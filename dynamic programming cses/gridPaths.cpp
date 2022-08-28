#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef long long ll;
#define minf INT_MIN;
#define inf INT_MAX;
#define nl '\n';
#define debug(x) cout << x << endl;
#define debugstr(s, i) cout << s << i << endl;
#define ppb pop_back
#define pb push_back
#define co(x) cout << x << "\n"
#define all(x) (x).begin(), (x).end()
#define mod 1000000007

void solve()
{

    int n;
    cin >> n;
    char grid[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));

    dp[n - 1][n - 1] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if ((i == n - 1 && j == n - 1) && grid[n - 1][n - 1] != '*')
            {
                dp[i][j] = 1;
            }
            else if (i == n - 1)
            {
                if (grid[i][j] != '*' && j < n)
                {
                    dp[i][j] += dp[i][j + 1];
                }
            }
            else if (j == n - 1)
            {
                if (grid[i][j] != '*' && i < n)
                {
                    dp[i][j] += dp[i + 1][j];
                }
            }
            else
            {
                if (grid[i][j] != '*' && (j < n && i < n))
                {
                    dp[i][j] = (dp[i][j + 1] + dp[i + 1][j]) % mod;
                }
            }
        }
    }
    if (grid[n-1][n-1] == '*')
    {
        cout << 0 << nl;
    }
    else
    {
        cout << dp[0][0] << nl;
    }
}

int main()
{
    solve();
    return 0;
}
