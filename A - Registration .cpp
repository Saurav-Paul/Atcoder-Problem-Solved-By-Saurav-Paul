				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s , p ;
    cin >> s >> p ;
    s += p[p.size()-1] ;
    cout << (s==p?"Yes" : "No") << endl ;

    return 0;
}
