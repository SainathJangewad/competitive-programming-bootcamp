 #include <iostream>
using namespace std;

int clearIthBit(int num, int i){
    // get 1 to the ith position 
    int mask = 1 << i;
    // get 1's compliment 
    mask  = ~mask;
    // ANDing the mask with num 
    return (num & mask);
}

int main() {
    int n , i;
    cin >> n >> i;
   cout << clearIthBit(n,i) << endl;
//    explanation : if n = 5 and i = 0 then 5 in binary is 101 so if we clear the 0th bit we have 100 which is 4 
	return 0;
}
