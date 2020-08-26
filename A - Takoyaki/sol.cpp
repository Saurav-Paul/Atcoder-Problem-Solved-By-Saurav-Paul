
/**
 *    author        : Saurav Paul 
 *    created       : August 24, 2020 11:29 AM
 *    Problem Name  : A - Takoyaki
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc176/tasks/abc176_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    ll N , X , T;
    cin >> N >> X >> T;
    cout << ((N+X-1)/X) * T << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
