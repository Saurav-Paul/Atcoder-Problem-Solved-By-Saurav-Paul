
/**
 *    author        : Saurav-Paul 
 *    created       : September 19, 2020 6:02 PM
 *    Problem Name  : B - Go to Jail
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc179/tasks/abc179_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N ;
        cin >> N ;
        int cnt = 0 ;

        bool ok = false ;
        for(int i = 0 ; i < N ; i++){
            int x , y ;
            cin >> x >> y ;
            if(x == y){
                cnt ++ ;
            }
            else{
                cnt = 0 ;
            }
            if(cnt == 3){
                ok = true ;
            }
        }

        cout << (ok?"Yes":"No") << endl ;

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
