				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector<string> s={"SUN", "MON", "TUE", "WED", "THU", "FRI",  "SAT" } ;
	string t ; cin >> t;
	for(int i = 0 ; i < 7; i++){
		if(s[i] == t){
			cout << 7-i << endl ;
			break ;
		}
	}

    return 0;
}
