#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iterator>
#include "base64.hpp"

using namespace std;

vector<base64::byte> xor_bytearr(vector<base64::byte> msg, vector<base64::byte> key){
	cout << "Msg size: " << msg.size() << " Key size: " << key.size() << endl;
	vector<base64::byte> c;
	for(int i = 0; i < msg.size(); ++i) {
		c.push_back(msg[i] ^ key[i % key.size()]);
	}
	return c;
}

int main(int argc, char** argv)
{
	string encoded
	{
		"ekghNjF6HVxSNiEqLjcZcisyLzYrV1Ym"
	};

	string other_str
	{
		"Cyber Security Challenge"
	};

	/*
	 * GET KEY
	 */
	vector<base64::byte> other(other_str.begin(), other_str.end());
	vector<base64::byte> decoded = base64::decode(encoded);
	auto key = xor_bytearr(other, decoded);


	// Open file
	// base64 each line??
	// xor each line
	// print to new file
	ifstream infile("e51d35ed.bin", ios::binary);
	//string infile_str(istreambuf_iterator<char>(infile), istreambuf_iterator<char>());
	infile.close();

	vector<base64::byte> decoded_file(istreambuf_iterator<char>(infile), {});
	//decoded_file = ;
	auto fnl = xor_bytearr(decoded_file, key);

	//for (auto d : fnl) {
		//cout << (char) d;
	//}

	/*
	ofstream outfile("processed.bin");
	outfile.close();
	*/


	return 1;
}
