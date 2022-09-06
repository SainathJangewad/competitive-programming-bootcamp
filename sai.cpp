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

int findCount(char ch, int x, int y)
{

    int count = 0;
    forn(i, 2)
    {
        forn(j, 2)
        {
            if (i != x && j != y && arr[i][j] == ch)
            {
                count++;
            }
        }
    }

    return count;
}

void solve()
{
    int arr[2][2];
    forn(i, 2)
    {
        forn(j, 2)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    forn(i, 2)
    {
        forn(j, n)
        {
            findCount(arr[i][j], i, n);
        }
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
