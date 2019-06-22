#include<bits/stdc++.h>
#define ll long long int
using namespace std;
typedef pair<ll, ll > Pair;

int main(){
  ll n;
  scanf("%lld",&n);
  vector <Pair> v(n);
  for(auto &x : v)
	scanf("%lld%lld",&x.first,&x.second);
  
  sort(v.begin(),v.end(),[](Pair x, Pair y){
	  if(x.second <= y.second){
		  if(x.first > y.first && x.second == y.second)
			return false;
		  return true;
	  }
	  return false;
  });
  
  bool flag = true;
  ll now = 0;
 
  for(int i = 0 ; i < n; i++){
	   now += v[i].first;
	  if(now > v[i].second){
		  flag = false;
		  break ;
	  }
  }
  
  puts(flag?"Yes":"No");
  
  return 0;
}
