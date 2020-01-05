#include<bits/stdc++.h>
using namespace std;

long long int prime(long long int x) {
	long long int sq = sqrt(x) ;
	bool ok = true ;
	for(int i = 2 ; i < sq ; i ++){
		if(x%i == 0 ){
			ok = false ;
			break ;
		}
	}
	if(ok) return x ;
	else return prime(x+1) ;
}

int main(){
	long long int x ;
	cin >> x;
	
	cout << prime(x) << endl ;
	
	return 0 ;
}
