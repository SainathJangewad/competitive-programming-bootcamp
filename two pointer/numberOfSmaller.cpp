 /*
 Problem link -> https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B 
 */
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
  int x , y;
  cin >> x >> y;
  vi a(x) , b(y);
  forn(i,x){
      cin >> a[i];
  }
    forn(i,y){
      cin >> b[i];
  } 
  vi res(b.size());
  int  i = 0 , j = 0;

  while(i < a.size() && j < b.size()){
      if(a[i] < b[j]){
      i++; 
      }else{
          res[j] = i;
          j++;
      }
  }
  while(j < b.size()){
      res[j] = i; 
      j++;
  }
  forn(i,res.size()){
      cout << res[i] << " " ;
  }
}  

int main()
{
    solve();
    return 0;
}
