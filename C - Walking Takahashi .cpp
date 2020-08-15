
/**
 *    author        : Saurav Paul 
 *    created       : August 15, 2020 6:11 PM
 *    Problem Name  : C - Walking Takahashi
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc175/tasks/abc175_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    ll X , K , D ;
    cin >> X >> K >> D ;

    X = abs(X) ;

    ll can_divide = min(K,X/D) ;
    X -= (D*can_divide) ;
    K -= can_divide ;

    if(K&1){
        X = abs(X - D) ;
    }
    cout << X << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
