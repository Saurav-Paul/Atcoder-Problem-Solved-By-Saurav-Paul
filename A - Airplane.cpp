#include<bits/stdc++.h>
using namespace std;;
int main(){
	
	int n,q,r;
	scanf("%d%d%d",&n,&q,&r);
	printf("%d\n",n+q+r-max({n,q,r}));
	
	return 0;
}
