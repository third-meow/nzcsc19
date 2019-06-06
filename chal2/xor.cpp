#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	uint8_t yeet = 0b10101010;
	uint8_t bar = 0b00010010;

	cout << bitset<8>(yeet) << endl;
	cout << bitset<8>(bar) << endl;
	cout << bitset<8>(yeet ^ bar) << endl;

	return 0;
}

