
/**
 *    author        : Saurav Paul 
 *    created       : August 15, 2020 6:00 PM
 *    Problem Name  : A - Rainy Season
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc175/tasks/abc175_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    string s;
    cin >> s;
    int cnt = 0 , mx = 0;
    for(auto x : s){
        if(x == 'R') cnt ++, mx = max(mx,cnt) ;
        else cnt = 0 ;
    }
    cout << mx << endl ;
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
