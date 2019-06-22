#include<bits/stdc++.h>
using namespace std;
long long int lcm(long long int c, long long int d){
	return (c*d)/__gcd(c,d);
}
int main(){
  
  long long int a, b, c, d;
  scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

  long long int common = lcm(c,d);
  
  long long int prev = (a-1)/c + (a-1)/d - (a-1)/common; 
  long long int total = b/c + b/d - b/common;
  long long int ans = (b-a+1)-(total - prev);
  
  printf("%lld\n",ans);
  
  return 0;
}
