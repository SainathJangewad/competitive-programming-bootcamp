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
    string s;
    cin >> s;
    string t;
    cin >> t;
    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, INT_MAX));

    for (int i = 0; i <= s.size(); i++)
    {
        for (int j = 0; j <= t.size(); j++)
        {
            if (j == 0)
            {
                dp[i][j] = i;
            }
            else if (i == 0)
            {
                dp[i][j] = j;
            }
            else
            {
                if (s[i - 1] != t[j - 1])
                    dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]});
                else
                    dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }
    cout << dp[s.size()][t.size()] << nl;
}

int main()
{

    solve();

    return 0;
}
