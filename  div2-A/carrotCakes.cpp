#include<bits/stdc++.h>
using namespace std;

int main(){
 int cakes,time,baked,newOvenTime;
 cin >> cakes >> time >> baked >> newOvenTime;
 int totalT = time + time;
 if(totalT > time + newOvenTime){
    cout << "YES" << endl;
 }else if (time == newOvenTime){
   cout << "NO" << endl;
 }else if(cakes < baked){
   cout << "NO" << endl;
 }
}