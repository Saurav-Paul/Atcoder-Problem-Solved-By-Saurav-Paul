#include<bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define loop(i,a,b)           for(int i=a;i<b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define tcase()                ll t,n; scanf("%lld",&t);n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
void FAST_IO();
long long  table[1010][100000];
long long  val[110];
long long  wt[110];
int main()
{
    FAST_IO();
    long long  n,w;
    cin>>n;
    cin>>w;
    for(long long  i=1;i<=n;i++)
    {
        cin>>wt[i];
        cin>>val[i];
    }
    for(long long  i=1;i<=n;i++)
    {
        for(long long  j=1;j<=w;j++)
        {
            if(wt[i]<=w && j-wt[i]>=0)
            {

                table[i][j]=max(table[i-1][j],val[i]+table[i-1][j-wt[i]]);
            }

            else
                table[i][j]=table[i-1][j];
        }
    }

    cout<<table[n][w]<<endl;
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}
