problem link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

 
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
#define lower(x) transform(((x).begin(),(x).end(),(x).begin,::tolower)
#define mod 1000000007
#define forn(i, n) for (int i = 0; i < int(n); i++) 
 
 
 void solve(){ 
     int n ;
     ll sum;
     cin >> n >> sum;
     vi arr(n);
     for(int i = 0; i < n; i++){
         cin >> arr[i];
     }
     int l = 0;
     int r = 0;
     ll s = 0;
     int res = inf;
     for(int r = 0; r < n; r++){
         s += arr[r];
         while(s - arr[l] >= sum){
             s -= arr[l];
             l++;
         }
         if(s >= sum){
           res = min(res,r-l+1);
         }
     }
     if(res == INT_MAX) 
     {
         cout << -1 << nl;
     }
     else{
         cout << res << nl;
     }
     
 }
 

int main()
{
  int t;
//   cin >> t; 
  t = 1;
  while(t--){
      solve();
  }
  return 0;
}
