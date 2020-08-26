
/**
 *    author        : Saurav Paul 
 *    created       : August 24, 2020 11:32 AM
 *    Problem Name  : C - Step
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc176/tasks/abc176_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){
    ll N ;
    cin >> N ;
    vector<ll> v(N) ;
    for(auto &x : v){
        cin >> x;
    }
    ll answer = 0 ;
    ll mx = 0 ;
    for(int i = 0; i < N ; i++){
        answer += max(0LL,mx-v[i]) ;
        mx = max(mx,v[i]) ;
    }
    cout << answer << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
