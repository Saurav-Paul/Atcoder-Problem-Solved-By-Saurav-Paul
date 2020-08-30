
/**
 *    author        : Saurav Paul 
 *    created       : August 29, 2020 6:00 PM
 *    Problem Name  : A - Don't be late
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll d , t , s;
        cin >> d>> t >> s;
        t = t * s;
        if(d > t) {
            cout << "No" << endl ;
        }
        else {
            cout << "Yes" << endl ;
        }

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
