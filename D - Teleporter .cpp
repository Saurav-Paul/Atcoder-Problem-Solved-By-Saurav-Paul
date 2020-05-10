				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int n , k ; cin >> n >> k;

    vector<long long int> v(n+1) ;
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i] ;
    }
    vector<long long int> path ;
    bool rem[n+1] = {} ;

    long long int x = 1, pos = 1 ;
    long long int reoc = -1 ;
    for(int i = 1 ; i <= k ; i++){
        pos = v[x] ;
        if(rem[pos]){
            reoc = pos ;
            break ;
        }
        rem[pos] = true ;
        path.emplace_back(pos) ;
        x = pos ;
    }
    long long int p = -1 ;
    if(reoc != -1){
        for(int i = 0 ; ; i++){
            if(path[i] == reoc){
                p = i ;
                break ;
            }
        }
    }
    if( k < p){
        cout << path[k-1] << endl ;
    }
    else{
        k -= p ;
        long long int pth = path.size() - p ;
        long long int mod = k % pth ;
        if(mod == 0){
            mod = pth ;
        }
        cout << path[p+mod - 1] << endl ;
    }

    return 0;
}
