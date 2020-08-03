
/**
 *    author        : Saurav Paul 
 *    created       : August 03, 2020 11:41 AM
 *    Problem Name  : E - Logs
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc174/tasks/abc174_e
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n , k ;
    cin >> n >> k ;

    vector<long long> v(n) ;

    for(auto &x : v){
        cin >> x ;
    }

    sort(v.begin(),v.end() , [](int a, int b){
            return (a>b) ;
    }) ;

    long long l = 1 , r = v[0] ;
    while(l <= r){
        long long mid = (l + r) >> 1;

        bool ok = true ;
        int temp = k ;

        for(int i = 0 ; i < n; i++){
            if(v[i] <= mid) break ;
            long long t = (v[i]-1)/mid  ;
            temp -= t ;
            if(temp < 0){
                ok = false ;
                break ;
            }
        }

        if(ok == false){
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }

    }
    cout << l << endl ;
    return 0 ;
}
