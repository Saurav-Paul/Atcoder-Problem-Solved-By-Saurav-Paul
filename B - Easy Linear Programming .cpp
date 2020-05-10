				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a , b, c , k;
    cin >> a >> b >> c >> k ;
    long long int ans = 0 ;
    long long int x = min( a, k) ;
    ans += x ;
    k -= x ;
    x = min(b , k) ;
    k -= x ;
    ans -= k ;
    cout << ans << endl; 

    return 0;
}
