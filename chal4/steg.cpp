#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	vector<char> key;
	char a;
	while(cin >> a) {
		//if (find(key.begin(), key.end(), a) == key.end()) {
		if (a != '8' && a != ' ' && a != 'Z')
			key.push_back(a);
		//}
	}

	for (auto c : key) {
		cout << c << endl;
	}


	return 0;
}

