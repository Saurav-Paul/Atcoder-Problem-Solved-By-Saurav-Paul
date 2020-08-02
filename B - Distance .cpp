/**
 *    author        : Saurav Paul 
 *    created       : August 02, 2020 6:04 PM
 *    Problem Name  : B - Distance
 *    Problem Limit : NULL , NULL
 *    Problem Url   : https://atcoder.jp/contests/abc174/tasks/abc174_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    long long n , d ;
    cin >> n >> d;

    long long cnt = 0 ;

    while(n--){
        double x , y ;
        cin >> x >> y ;

        long long t = ceil(sqrt(x*x+y*y)) ;
        if(t <= d) cnt ++  ;
    }

    cout << cnt << endl ;

    return 0 ;
}
