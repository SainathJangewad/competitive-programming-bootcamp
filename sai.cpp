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
// round up trick : int times = (N + X - 1) / X;

void solve()
{
    string s;
    cin >> s;
    vi ans;
    int count = 0;
    int sum = 0;
    forn(i, s.size())
    {

        if (s[i + 1] == '1')
        {
            count++;
        }
        else
        {

            if (count)
            {
                ans.pb(count);
                count = 0;
            }
        }
    }
    sort(ans.rbegin(), ans.rend());
    for (int i = 0; i < ans.size(); i += 2)
    {
        sum += ans[i];
    }

    if (s[0] == '1' && s[1] == '1')
    {
        cout << sum + 1 << nl;
    }
    else if (sum == 0)
    {
        cout << 0 << nl;
    }
    else
    {
        cout << sum << nl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
