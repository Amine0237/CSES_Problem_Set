#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	set<int> a;
	int out=0;

	string line; int value;
	getline(cin, line);
	istringstream iss(line);

	while(iss >> value) {
		a.insert(value);
	}

	getline(cin, line);
	istringstream iss2(line);

	while(iss2 >> value) {
		auto it = a.find(value);
		if(it != a.end()){
			out+=1;
		}
	}

}