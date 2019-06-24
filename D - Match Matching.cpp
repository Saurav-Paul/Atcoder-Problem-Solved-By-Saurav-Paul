#include<bits/stdc++.h>
using namespace std;
vector <int > sam({0,2,5,5,4,5,6,3,7,6});
vector <pair<int , int > > allowed;

string find_max(string &curr,string  &temp){
	int sz =(int) curr.size();
	int tsz= (int) temp.size();
	bool flg = false;
	if(tsz > sz){
		flg = true ;
	}
	else if(tsz == sz ){
		
		for(int i = 0 ; i < sz ; i++){
			int a = curr[i]-'0';
			int b = temp[i]-'0';
			
			if(a > b)
				break ;
			if( a < b){
				flg = true ;
				break ;
			}
		}
	}
	
	if(flg )
		return temp;
	return curr ;
}

int main(){
	
	/* 5
	 * 117
	 * 711
	 * */
	 
	 int n, m;
	 scanf("%d%d",&n,&m);
	 
	 for(int i = 0 ; i< m ; i++){
		int temp ;
		scanf("%d",&temp);
		allowed.emplace_back(temp,sam[temp]);
	}
	
	sort(allowed.begin(),allowed.end(),[](pair<int,int> x , pair<int,int> y){

		return x.first > y.first;
		 
	 });

	const int nax = n+1;
	vector < string > dp(nax,"");
	for(auto x : allowed){
		char value = x.first + '0';
		int cost = x.second;
		for(int i = 1; i <= n ; i++){
			
			if(i-cost >=0 ){
				if(dp[i-cost]!="" || i-cost==0){
					string temp = dp[i-cost];
					temp += value ;
					
					if(temp.size()<dp[i].size())
						continue ;

					dp[i] = find_max(dp[i],temp);
					
				}
			}
			
			
		}
		
		
	}
	
	cout << dp[n] << endl;
	
	return 0;
}
