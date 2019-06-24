#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll a , b ,q;
	scanf("%lld%lld%lld",&a,&b,&q);
	
	vector <ll > s,t;

	for(ll temp, i = 0 ; i < a ; i++)
		scanf("%lld",&temp),s.push_back(temp);
	for(ll temp, i = 0 ; i < b ; i++)
		scanf("%lld",&temp),t.push_back(temp);

	while(q--){
			ll x ;
			scanf("%lld",&x);
			ll fl = lower_bound(s.begin(),s.end(),x)-s.begin();
			
			ll tl = lower_bound(t.begin(),t.end(),x)-t.begin();
			
			ll ans = 0;
		
			ans = 1e18+90 ;
			if(tl >= b)
				tl--;
			if(fl >= a)
				fl--;
			ll fa= fl , ta = tl;
			
			if(fa)
				fa--;
			if(ta)
				ta--;
				
			
			for(auto j : {fa,fl}){
				for(auto y : {ta,tl}){
					ans= min( ans, abs(x-s[j])+abs(s[j]-t[y]));
					ans= min( ans, abs(x-t[y])+abs(t[y]-s[j]));
					
				}
			}
			printf("%lld\n",ans);
			
		
	}

	return 0;
}
