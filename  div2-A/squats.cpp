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
    string s;
    cin >> s;
    int big = 0;
    int small = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'X')
            big++;
        else
            small++;
    }

    if ((n - big) == 0 || (n - small) == 0)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            if (s[i] == 'x')
                s[i] = 'X';
            else
                s[i] = 'x';
        }
        cout << n / 2 << nl;
        cout << s << nl;
        return;
    }

    if (big > small)
    {
        int x = big - (n / 2);
        int bcount = x;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'X')
            {
                s[i] = 'x';
                bcount--;
            }
            if (bcount == 0)
                break;
        }
        cout << x << nl;
        cout << s << nl;
    }
    else if (small > big)
    {
        int y = small - (n / 2);
        int scount = y;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'x')
            {
                s[i] = 'X';
                scount--;
            }
            if (scount == 0)
                break;
        }
        cout << y << nl;
        cout << s << nl;
    }
    else
    {
        cout << 0 << nl;
        cout << s << nl;
    }
}

int main()
{
    solve();
    return 0;
}
