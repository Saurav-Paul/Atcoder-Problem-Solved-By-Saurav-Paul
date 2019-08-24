#include<bits/stdc++.h>
using namespace std;

int f(int n){
	return (n%10)*((n/10)%10);
}

int main(){
	
	int n , d;
	cin >> n >> d;
	int cnt = 0;
	
	for(int i = 1 ; i <= n ; i++){
		for(int j = 22 ; j <= d ; j++){
			if(j%10<2 or (j/10)%10 < 2)
				continue ;
				
			if(f(j)==i)
				cnt ++;
		}
	}
	cout << cnt << endl;
	
	return 0;
}
