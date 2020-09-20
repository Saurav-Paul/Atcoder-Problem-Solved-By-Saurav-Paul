
/**
 *    author        : Saurav-Paul 
 *    created       : September 19, 2020 6:05 PM
 *    Problem Name  : C - A x B + C
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc179/tasks/abc179_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll N ;
        cin >> N ;
        ll ans = 0 ;

        for(ll i = 1 ; i <= N ; i++){
            for(ll j = 1; j <= N ; j++){
                if(i * j >= N) break ;
                ans ++ ;
            }
        }

        cout << ans << endl ;

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
