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
    vi arr(n);
    forn(i, n)
    {
        cin >> arr[i];
    }
    int count = 1;
    sort(arr.begin(), arr.end());
    int secondLastIndex = n - 1;
    forn(i, secondLastIndex)
    {
        if (arr[i] != arr[i + 1])
            count++;
    }
    cout << count << nl;
}

int main()
{
    solve();
    return 0;
}
