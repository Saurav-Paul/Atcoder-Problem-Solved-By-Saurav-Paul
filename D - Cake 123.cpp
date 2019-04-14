#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int main(){
	ll x,y,z,K;
	scanf("%lld %lld %lld %lld",&x,&y,&z,&K);
	vector<ll>a,b,c;
	ll temp;
	for(int i=0; i<x; i++){
		scanf("%lld",&temp);
		a.push_back(temp);
	}
	for(int i=0; i<y; i++){
		scanf("%lld",&temp);
		b.push_back(temp);
	}
	for(int i=0; i<z; i++){
		scanf("%lld",&temp);
		c.push_back(temp);
	}
	sort(a.begin(),a.end(),greater<ll>());
	sort(b.begin(),b.end(),greater<ll>());
	sort(c.begin(),c.end(),greater<ll>());
	priority_queue<ll> pq;
	
	for(int i=0; i<x ; i++){
		for(int j=0; j<y ; j++){
			for(int k=0; k<z ; k++){
				if((i+1)*(j+1)*(k+1)>K)
					break ;
				else
					pq.push(a[i]+b[j]+c[k]);
			}
		}
	}

	while(K-- && !pq.empty()){
		printf("%lld\n",pq.top());
		pq.pop();
	}
		
	return 0;
}
/*
2 2 2 8
4 6
1 5
3 8
*/
