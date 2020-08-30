
/**
 *    author        : Saurav Paul 
 *    created       : August 29, 2020 6:36 PM
 *    Problem Name  : D - Friends
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N , M ;
    vector<int>parent ;
    int find_parent(int x){
        
        if(parent[x]==x)
            return x;
        return parent[x] = find_parent(parent[x]);
    }
    public :
    void solve(){
        cin >> N >> M ;

        for(int i = 0 ; i <= N; i++){
            parent.push_back(i) ;
        }

        for(int i = 0 ; i < M ; i++){
            int u , v;
            cin >> u >> v;
            int f1 = find_parent(u) ;
            int f2 = find_parent(v) ;

            if(f1 != f2){
                parent[f1] = f2 ;
            }
        }

        map<int,int> cnt ;
        for(int i = 1; i <= N ; i++){
            cnt[find_parent(parent[i])] ++ ;
        }

        int ans = 0 ;
        for(auto x : cnt){
            ans = max(ans,x.second) ;
        }
        cout <<ans <<endl ;
        

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
