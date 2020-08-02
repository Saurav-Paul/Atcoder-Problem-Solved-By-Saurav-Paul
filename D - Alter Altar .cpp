/**
 *    author        : Saurav Paul 
 *    created       : August 02, 2020 6:38 PM
 *    Problem Name  : D - Alter Altar
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc174/tasks/abc174_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);


    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0 ;
    for(auto x : s){
        if(x == 'R')
            cnt ++ ;
    }

    int ans =  cnt ;
    for(int i = 0 ; i < cnt ; i++){

        if(s[i]=='R')
            ans -- ;

    }

    cout << ans << endl ;

    return 0 ;
}
