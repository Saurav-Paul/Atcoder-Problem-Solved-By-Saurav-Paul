
/**
 *    author        : Saurav Paul 
 *    created       : August 29, 2020 6:02 PM
 *    Problem Name  : B - Substring
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        string s ,t ;
        cin >> s >> t ;
        int ss = s.size() , st = t.size() ;
        int mn = st ;

        for(int i = 0 ; i <= ss-st; i++){
            int cnt = 0;
            
            for(int j = i ; j < i + st ; j++){
                if(s[j] != t[j-i]) cnt ++ ;
                 
            }
            mn = min(cnt,mn) ;
        }
        cout << mn << endl ;
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
