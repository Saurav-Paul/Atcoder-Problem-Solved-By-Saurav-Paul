#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int takentime=0,n;
	long long int in[6];
	cin>>n;
	for(int i=1; i<=5; i++)
		cin>>in[i];
	
	takentime=5;
	takentime+=max({(n-1)/in[1],(n-1)/in[2],(n-1)/in[3],(n-1)/in[4],(n-1)/in[5]});
	cout<<takentime<<endl;

	return 0;
}





/*
5
3
2
4
3
5
*/
