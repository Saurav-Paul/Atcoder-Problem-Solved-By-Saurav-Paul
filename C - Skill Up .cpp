				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

template<typename T> bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int n , m , x ;
    cin >> n >> m >> x ;

    vector < vector< long long int > > v(n+1 , vector<long long int> (m+1)) ;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= m ; j++){
            cin >> v[i][j] ;
        }

    }

    long long int mn = INT_MAX ;
    bool ok = false ;
    int lim = pow(2, n) ;
    for(int t = 1 ; t <= lim ; t++){
        vector<long long int> cnt(m+1) ;
        for(int j = 0 ; j < n ; j++){
            if(check_bit(t,j)){
                for(int i = 0 ; i <= m ; i++){
                    cnt[i] += v[j][i] ;
                }
            }
        }
        // checking ...
        bool c = true ;
        
        for(int i = 1 ; i <= m ; i++){
            if(cnt[i] < x){
                c = false ;
            }
        }
        if(c){
            ok = true ;
            mn = min(mn, cnt[0]) ;
        }
    }
    cout << (ok? mn : -1) << endl ;

    return 0;
}
