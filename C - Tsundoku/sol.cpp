/**
 *    author        : Saurav Paul 
 *    created       : August 21, 2020 12:18 PM
 *    Problem Name  : C - Tsundoku
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc172/tasks/abc172_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    int N , M , K ;
    cin >> N >> M >> K ;

    vector<int> deskA(N) , deskB(M) ;

    for(auto& x: deskA) cin >> x ;
    for(auto& x: deskB) cin >> x ;

    vector<ll> ca , cb ;

    ca.push_back(0) ;
    cb.push_back(0) ;

    for(auto x : deskA) ca.push_back(x + ca.back()) ;
    for(auto x : deskB) cb.push_back(x + cb.back()) ;

    int can_read = 0 ;

    for(int i = 0 , j = M ; i <= N ; i++ ){
        if(ca[i] > K) break ;

        while(ca[i] + cb[j] > K) j--;

        can_read = max(can_read,i + j) ;
    }

    cout << can_read << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
