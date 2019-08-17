#include<bits/stdc++.h>
using namespace std;

inline long long int f(long long int n){
	return (n*(n-1))/2;
}


int main(){
	
	ios_base::sync_with_stdio(false);
	map<string,long long int> m;
	string s;
	long long int n;
	cin>> n;
	while(n--){
		cin >> s;
		sort(s.begin(),s.end());
		m[s] ++;
	}
	
	long long int mx = 0;
	for(auto x : m)
		mx += f(x.second);
	
	cout << mx <<"\n";
	return 0;
}
