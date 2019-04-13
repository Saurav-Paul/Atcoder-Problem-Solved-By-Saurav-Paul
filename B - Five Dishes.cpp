#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int ans=0,maximum=0;
	for(int i=0; i<5 ; i++){
		int temp;
		cin>>temp;
		ans+=temp;
		if(temp%10){
			ans+=(10-temp%10);
			maximum=max(maximum,(long long)(10-temp%10));
		}
	}
	cout<<ans-maximum<<endl;
	
	return 0;
}
/*
29
20
7
35
120
*/
