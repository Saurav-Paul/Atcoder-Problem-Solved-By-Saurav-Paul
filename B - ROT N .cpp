				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	int n ; string s;
	cin >> n >> s ;
	for(auto &x : s){
		x =( (x - 'A' + n ) % 26 ) + 'A';
	}
	cout << s << endl ;
    return 0;
}
