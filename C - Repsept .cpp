/**
 *    author        : Saurav Paul 
 *    created       : August 02, 2020 6:12 PM
 *    Problem Name  : C - Repsept
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc174/tasks/abc174_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    long long x ;
    cin >> x ;

    if(x%2==0){
        cout << -1 << endl ;
        return 0 ;
    }

    long long t = 7 ;
    long long cnt = 1 ;
    unordered_map<int,int> prevs ;

    while(t%x){
        t = ((t%x)*10)+7 ;
        if(prevs[t]==1){
            cout << - 1 << endl ;
            return 0 ;
        }
        prevs[t] = 1;
        cnt ++ ;
    }

    cout << cnt << endl ;

    return 0 ;
}
