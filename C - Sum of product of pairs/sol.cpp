
/**
 *    author        : Saurav Paul 
 *    created       : August 29, 2020 6:15 PM
 *    Problem Name  : C - Sum of product of pairs
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
ll BigMod(ll num , ll power, ll mod){
	
	if(power == 0 ){
		return 1 ;
	}
	ll x = 1 ;
	if(power&1){
		x = num ;
	}
	ll y = BigMod(num,power/2,mod) ;
	y = ( y%mod * y%mod )%mod ;
	return (y%mod * x%mod)%mod ;
	
}
ll BigModInverse(ll num , ll mod ){

	return BigMod(num,mod-2,mod) ;
}
class TC{

    ll N ;
    vector<ll> v ;
    ll mod = 1e9 + 7 ;

    void add(ll &x , ll y){
        x = (x%mod + y%mod) %mod ;
    }
    
    public :
    void solve(){
        cin >> N ;

        ll sum2 = 0 ;
        ll square_sum = 0 ;
        for(int i = 0 ; i < N ; i++){
            ll x;
            cin >> x;
            add(sum2 , x) ;
            x *= x;
            add(square_sum, x) ;
            v.push_back(x) ;
        }

        sum2 *= sum2 ;
        ll new_got = (sum2%mod - square_sum%mod + mod)% mod ;
        new_got = (new_got * BigModInverse(2,mod))%mod ;
        cout << new_got << endl ;

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
