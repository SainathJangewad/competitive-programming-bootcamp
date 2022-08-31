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
    string arr[3][n];
    map<string,int> m;
    for(int i = 0; i < 3; i++)
    {
        forn(j, n)
        {
            cin >> arr[i][j]; 
            m[arr[i][j]]++;
        }
    }
    
    int countOne = 3 * n;
    int counttwo = countOne;
    int countThree = countOne;
    forn(i,n){
        if(m[arr[0][i]] == 3){
            countOne -= 3;
        }else if(m[arr[0][i]] == 2) countOne -= 2;
    }
     forn(i,n){
        if(m[arr[1][i]] == 3){
            counttwo -= 3;
        }else if(m[arr[1][i]] == 2) counttwo -= 2;
    }
     forn(i,n){
        if(m[arr[2][i]] == 3){
            countThree -= 3;
        }else if(m[arr[2][i]] == 2) countThree-= 2;
    }
    
    cout << countOne << " " << counttwo <<" " << countThree << nl;
 
  
  
 
    
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
