#include <iostream>
using namespace std;

bool getIthBit(int num, int i){
    int mask = 1 << i;
    return ((num & mask) != 0); 
}


int main() {
    int n , i;
    cin >> n >> i;
   cout << getIthBit(n,i) << endl;
	return 0;
}
