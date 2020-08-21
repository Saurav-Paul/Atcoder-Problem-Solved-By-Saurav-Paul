
/**
 *    author        : Saurav Paul 
 *    created       : August 21, 2020 12:13 PM
 *    Problem Name  : A - Calc
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc172/tasks/abc172_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){
    ll a ;
    cin >> a;
    a = a * ( 1 + a * ( 1 + a ) ) ;
    cout << a << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
