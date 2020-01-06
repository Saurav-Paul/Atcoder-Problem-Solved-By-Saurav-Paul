
// Problem : D - Prediction and Restriction
// Contest : AtCoder Beginner Contest 149
// URL : https://atcoder.jp/contests/abc149/tasks/abc149_d
// Memory Limit : 1024.000000 MB 
// Time Limit : 2000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

		/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);

int main()
{
     boost ;
     int n , k ; cin >> n >> k ;
     int r , s, p ; cin >> r >> s >> p ;
     string game ,S=string(n,'x'); cin >> game ;
     int ans = 0 ;
     for(int i = 0 ; i < n ;i ++){
             if(game[i] == 'r'){
                 if(i-k >= 0 && S[i-k]=='p'){
                     S[i] = 'x';
                 }
                 else ans += p, S[i] = 'p' ;
             }
             if(game[i] == 's'){
                 if(i-k >= 0 && S[i-k]=='r'){
                     S[i] = 'x';
                 }
                 else ans += r , S[i] = 'r';                 
             }
             if(game[i] == 'p'){
                 if(i-k >= 0 && S[i-k]=='s'){
                     S[i] = 'x';
                 }
                 else ans += s, S[i] ='s' ;                 
             }
    }

    cout << ans << endl ;
    return 0;
}
