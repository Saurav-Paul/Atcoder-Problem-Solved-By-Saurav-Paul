
/**
 *    author        : Saurav Paul 
 *    created       : August 24, 2020 11:31 AM
 *    Problem Name  : B - Multiple of 9
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc176/tasks/abc176_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    string N ;
    cin >> N ;
    ll sum = 0 ;
    for(auto x : N) sum += x-'0' ;
    cout <<(sum%9 == 0?"Yes": "No") << endl ;
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
