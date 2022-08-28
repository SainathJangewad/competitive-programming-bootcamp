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
    vi dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while (num != 0)
        {
            int lastDigit = num % 10;
            if (lastDigit != 0)
            {
                dp[i] = min(dp[i], 1 + dp[i - lastDigit]);
            }
            num /= 10;
        }
    }
    cout << dp[n] << nl;
}

int main()
{
    solve();
    return 0;
}
