				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
using namespace std;


int main()
{
	int n,l,sum = 0;
	scanf("%d%d",&n,&l);
	vector <int > v(n);
	
	for(int i = 0  ; i < n; i++)
		v[i] = l+i,sum += v[i];
	
	
	int ans = sum;
	sort(all(v));
	for(int i = 0 ; i < n; i++){

		if(i==n-1)
			ans = sum-v[i];
		else if(v[i] >= 0){
			ans = sum-v[i];
			break;
		}
	}
	
	printf("%d\n",ans);
    return 0;
}
