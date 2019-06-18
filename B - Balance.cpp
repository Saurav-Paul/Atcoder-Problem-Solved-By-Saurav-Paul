#include<bits/stdc++.h>
using namespace std;;
int main(){
	
	int n, sum = 0,  ans = 1e9 + 90;
	scanf("%d",&n);
	vector <int > v(n);
	for(int &x : v)
		scanf("%d",&x),sum += x;
		
	int sum2 = 0;
	for(int i =0 ; i < n-1 ; i ++){
		sum2 += v[i] ;
		sum -= v[i] ;
		ans = min (ans,abs(sum2-sum));
	}
	printf("%d\n",ans);
	return 0;
}
