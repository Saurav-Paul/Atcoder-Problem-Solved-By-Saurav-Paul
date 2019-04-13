#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int minimum=INT_MAX, maximum=-INT_MAX;
	for(int i=0; i< 5 ; i++){
		int temp;
		cin>>temp;
		if(temp>maximum)
			maximum=temp;
		if(temp<minimum)
			minimum=temp;
	}
	long long int k;
	cin>>k;
	if(maximum-minimum>k)
		cout<<":("<<endl;
	else
		cout<<"Yay!"<<endl;
	return 0;
}
