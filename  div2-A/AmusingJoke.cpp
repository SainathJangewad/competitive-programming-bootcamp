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
   string a,b,c;
   cin >> a >> b >> c;
   string ab = a+b;
   sort(ab.begin(),ab.end());
   sort(c.begin(),c.end());
   int clen = c.length();
   if(ab.length() != c.length()){
      cout << "NO\n" ;
   }else{
       for(int i = 0; i < ab.length(); i++){
           for(int j = 0; j < c.length(); j++){
               if(ab[i] == c[i]){
                   clen--;
                   break;
               }
           }
       } 
       if(clen == 0){
            cout << "YES\n";
       }else{
          cout << "NO\n";
       }
   }
}

int main(){
    solve();
return 0;
}
 

