
/**
 *    author        : Saurav Paul 
 *    created       : August 21, 2020 5:48 PM
 *    Problem Name  : D - Sum of Divisors
 *    Problem Limit : 3000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc172/tasks/abc172_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    ll N ;
    cin >> N ;
    vector<int> nod(N+1) ;

    for(int i = 1 ; i <= N ; i++){
        for(int j = i ; j <= N ; j+= i){
            nod[j] ++ ;
        }
    }

    ll answer = 0 ;

    for(int i = 1 ; i <= N ; i++){
        answer += (ll) nod[i] * i ;
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
