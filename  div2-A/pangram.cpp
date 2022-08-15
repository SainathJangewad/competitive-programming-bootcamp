#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef long long ll;
#define debug(x) cout << x << endl;
#define nl '\n';

void solve( ){
    int n;
    cin >> n;
    string s;
    cin >> s;

  vector<bool> mark(26,false);
    int idx;
    for(int i = 0; i < s.length(); i++){
      if(s[i] >= 'A' && s[i] <= 'Z'){
         idx = s[i]-'A';
      }
      else{
         idx = s[i]-'a';
      }
       mark[idx] = true;
    }
   for(int i = 0; i < 26; i++) {
      if(!mark[i]){
        cout << "NO" << nl;
        return;
      }
   }
   cout << "YES" << nl;
}

int main(){
int t;
cin >> t;
while(t--){
 solve();
}
return 0;
}