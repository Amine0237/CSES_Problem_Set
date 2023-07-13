#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a, b;
	int out=0;
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string line; int value;
	getline(cin, line);
	istringstream iss(line);
	
	while(iss >> value){
		a.push_back(value);
	}

	getline(cin, line);
	istringstream iss2(line);
	
	while(iss2 >> value){
		b.push_back(value);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	auto ita = a.begin(), itb = b.begin();

	while (ita!=a.end() && itb!=b.end()){
		while(ita!=a.end() && *ita < *itb) ita++;
		if(*ita == *itb){ out+=1; ita++; }
		while(itb!=b.end() && *itb < *ita) itb++;
		if(*ita == *itb){ out+=1; itb++; }
	}

	cout << out;
}
