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
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin >> n;
    int arr[n][3];
    int dp[n][3];
    forn(i, n)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j]; 
        }  
    }
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];

    for (int i = 1; i < n; i++)
    {
        dp[i][0]  = arr[i][0] + max( dp[i - 1][1],  dp[i - 1][2]);
        dp[i][1] = arr[i][1] + max( dp[i - 1][0],  dp[i - 1][2]);
        dp[i][2] = arr[i][2] + max( dp[i - 1][1],  dp[i - 1][0]);
    }
    cout << max(dp[n - 1][0], max( dp[n - 1][1], dp[n - 1][2]));
}

int main()
{
    solve();
    return 0;
}
