#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a , b , x;
	cin >> a >> b >> x;
	cout << max(a-x,0LL) ;
	x = max( x-a , 0LL) ;
	cout << " " << max(b-x, 0LL ) << endl ;
	return 0 ;
}
