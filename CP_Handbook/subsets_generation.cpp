#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef long long ll;
typedef double d;
typedef vector<int> vi;
typedef pair<int,int> pi;


void show(vector<int> subset){
	cout << "{ ";
	for(auto it=subset.begin(); it!=subset.end(); it++){ 
		cout << *it << " ";
	}
	cout << "}\n";
}

// Method 1 for generating subsets
void search(int k, int n, vector<int> subset) 
	{	
		if(k == n){
			show(subset);
		} else {
			search(k+1, n, subset);
			subset.push_back(k);
			search(k+1, n, subset);
			subset.pop_back();
		}
	}

void search(int n){
	vector<int> subset;
	search(0, n, subset);
}

// Method 2 for generating subsets
void generate_subsets_2(int n){
	// 1<<n represents a number with only the n-th bit set to 1
	// exemple: (1<<5) == 32
	for(int b=0; b < (1<<n); b++){  
		vector<int> subset;
		for(int i = 0; i<n; i++){
			if(b&(1<<i)) subset.push_back(i); // checking if the i-th bit of b is 1. if yes, push i.
		}
		show(subset);
	}
}

int main(){
	/*
	// Generating subsets
	int n = 3;
	search(n); // Method 1
	generate_subsets_2(n); // Method 2
	*/

}