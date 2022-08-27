 #include<bits/stdc++.h>
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
#define debugstr(s,i) cout << s << i << endl;
#define ppb pop_back
#define pb push_back
#define co(x) cout << x << "\n"
#define all(x) (x).begin(),(x).end()
#define mod 1000000007

 void solve(){  
    ll n;
    cin >> n;
    vector<ll> dp(n+1,0);
    dp[0] = 1;
    
    for(int i  = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(j > i) break;
            dp[i] = (dp[i] + dp[i-j]) % mod;
        }
    }
    cout << dp[n] << nl;
   
 }
    

int main(){
 int t = 1;
 
 while(t--){
      solve();
 }
return 0;
}
 

