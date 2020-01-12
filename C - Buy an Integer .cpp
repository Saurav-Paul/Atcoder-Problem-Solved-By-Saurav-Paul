				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

long long int cal(long long int A , long long int B ,long long int N){
	long long int digit = 0 , ans = 0;
	ans = A * N ;
	while(N){
		++digit ;
		N /= 10;
	}
	ans += B * digit ;
	return ans ;
}

int main()
{
	ios_base::sync_with_stdio(false); 
	long long int A , B , X , low  , high ;	

	cin >> A >> B >> X;
	low = 0 , high = 1e9 ;
	while(low < high){
		long long int mid = (1 + low + high) >> 1 ;
		if(cal(A,B,mid) <= X){
			low = mid ;
		}
		else
		{
			high = mid -1 ;
		}
		
	}
	cout << low << endl ;
	return 0;
}
