
/**
 *    author        : Saurav Paul 
 *    created       : August 15, 2020 6:03 PM
 *    Problem Name  : B - Making Triangle
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc175/tasks/abc175_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    int N ;
    cin >> N ;
    vector<int> V(N) ;

    for(auto &x : V){
        cin >> x ;
    }

    ll ans = 0 ;
    
    auto get = [](int i , int j , int k){
        if(i == j || j == k || k == i) return 0 ;
        vector<int> v({i,j,k}) ;
        sort(v.begin(),v.end()) ;
        if(v[0] + v[1] > v[2]) return 1 ;
        return 0 ;
    } ;

    for(int i = 0 ; i < N ; i++){
        for(int j = i + 1; j < N ; j++){
            for(int k = j + 1; k < N ; k++){
                ans += get(V[i], V[j] , V[k]) ;
            }
        }
    }
    cout << ans << endl ;
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
