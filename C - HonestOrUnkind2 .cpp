/*Saurav Paul*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define boost ios_base::sync_with_stdio(0);

using pii = pair<int, int>;
vector<vector<pii>> graph(1, vector<pii>());

bool check(int x, int var)
{
	return (var & (1 << x));
}

int main()
{
	boost;
	int n;
	cin >> n;
	graph = vector<vector<pii>>(n + 1, vector<pii>());
	int contra = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		while (x--)
		{
			int a, b;
			cin >> a >> b;
			graph[i].push_back(make_pair(a-1, b));
		}
	}
	int lim = (1 << n) , ans = 0 ;
	for(int mask = 0 ; mask < lim ; mask ++){
		int var =  mask ;
		int person = 0 ;
		bool ok = true ;
		while(var && ok){
			if(var&1){
				for(auto x : graph[person]){
					if(check(x.first,mask) ^ (x.second)){
						ok = false;
						break ;
					}
				}
			}
			person ++ ;
			var >>= 1;

		}
		if(ok)
			ans = max(ans, __builtin_popcount(mask)) ;
	}
	cout << ans << endl ;
	return 0;
}
