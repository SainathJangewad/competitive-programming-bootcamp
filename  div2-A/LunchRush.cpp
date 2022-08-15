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

 void solve(){  
  int n , t;
  cin >> n >> t;
  int arr[n][2];
  for(int i = 0; i < n; i++){
      for(int j = 0; j < 2; j++){
          cin >> arr[i][j];
      }
  }
  int maxi = minf;
  for(int i = 0; i < n; i++){
      if(arr[i][1] <= t){
          maxi = max(arr[i][0],maxi);
      }else{
          maxi =  max(maxi,arr[i][0] - (arr[i][1] - t)); 
      }
  }
  cout << maxi << nl; 
 }
    

int main(){
 solve();
return 0;
}
 

