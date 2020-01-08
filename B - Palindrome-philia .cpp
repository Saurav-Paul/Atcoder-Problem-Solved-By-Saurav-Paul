				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);


int main()
{
	boost ;
	string s ; cin >> s;
	int cnt = 0;
	for(int i = 0 , j = s.size() -1 ; i < j ; i++ , j--){
		if(s[i]!=s[j])
			cnt ++;
	}
	cout << cnt << endl ;
    return 0;
}
