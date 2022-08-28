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
    int n , tar;
    cin >> n >> tar;
    vi coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    vi dp(tar+1,tar+1);
    dp[0] = 0;
    for(int i = 1 ; i <= tar; i++){
        for(int j = 0; j < coins.size(); j++){
            if( i - coins[j] >= 0){
                dp[i] =  min(dp[i-coins[j]]+1,dp[i]) % mod;
            }
        }
    }
    cout << (dp[tar] > tar ? -1 : dp[tar]); 
}

int main()
{
  solve();
  return 0;
}
