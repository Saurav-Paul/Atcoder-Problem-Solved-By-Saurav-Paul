
/**
 *    author        : Saurav Paul 
 *    created       : August 29, 2020 6:43 PM
 *    Problem Name  : E - Coprime
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_e
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;
vector<int>primelist;
const int nax = 1e6 + 90 ;
int mark[nax];
void sieve(){
    int n = nax - 10 ;
    int i,j,limit=sqrt(n*1.)+2;
    primelist.push_back(2);
    mark[1]=1;
    for(i=4; i<=n; i+=2){
        mark[i]=1;
    }
    mark[1]=2;
    for(i=3; i<=n; i+=2)
        if(!mark[i]){
            primelist.push_back(i);
            if(i<=limit){
                for(j=i*i; j<=n; j+=i*2){
                    mark[j]=1;
                }
            }
        }


}
class TC{

    int N, mx  ;
    vector<int> v ;

    public :

    bool check(){
        bool ok = true ;
        sort(v.begin(),v.end()) ;

        vector<int> pos(mx+10,0) ;

        for(int i = 0 ; i < N ; i++){
            int num = v[i] ;
            pos[num] ++;
        }

        for(auto p : primelist){
            int cnt = 0 ;
            for(int i = p ; i <= mx ; i += p){
                cnt += pos[i] ;
            }
            if(cnt > 1) return false ;
        }
        return true ;
    }

    void solve(){
        cin >> N ;
        int GCD = 0 ;
        for(int i = 0 ; i< N; i++){
            int x; cin >> x;
            v.push_back(x) ;
            mx = max(x,mx) ;

            GCD = __gcd(x,GCD) ;
        }

        string ans = "x" ;
        if(GCD == 1){
            if(check()){
                ans = "pairwise coprime" ;
            }
            else{
                ans = "setwise coprime" ;
            }
        }
        else{
            ans = "not coprime" ;
        }
        cout << ans << endl ;

    }

};

int main(){
    ios_base::sync_with_stdio(false);
    sieve() ;
    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
