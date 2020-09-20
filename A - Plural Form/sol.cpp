
/**
 *    author        : Saurav-Paul 
 *    created       : September 19, 2020 6:00 PM
 *    Problem Name  : A - Plural Form
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc179/tasks/abc179_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        string s ;
        cin >> s;
        int sz = s.size() ;
        if(s[sz-1] == 's'){
            s += "es" ;
        }
        else{
            s += "s" ;
        }
        cout << s << endl ;

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
