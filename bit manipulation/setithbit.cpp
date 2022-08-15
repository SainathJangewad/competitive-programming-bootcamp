#include <iostream>
using namespace std;

int setIthBit(int num, int i){
    int mask = 1 << i;
     return (num | mask);
}

int main() {
    int n = 5;
    int i;
    cin >> i;
   cout << setIthBit(n,i) << endl;
   // op : 7
   // 5 in binary is 101 , we if we set 1th bit then we get 111 which is 7
	return 0;
}
