
/**
 *    author        : Saurav Paul 
 *    created       : August 21, 2020 12:16 PM
 *    Problem Name  : B - Minor Change
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc172/tasks/abc172_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    string s , t;
    cin >> s >> t;
    int cnt = 0 ;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]!=t[i]) ++ cnt ;
    }

    cout << cnt << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
