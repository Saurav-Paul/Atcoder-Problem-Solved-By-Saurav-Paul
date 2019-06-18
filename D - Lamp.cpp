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

const int nax = 2000+1;
char s[nax][nax];
int dp[nax][nax];
int h , w;
int main()
{
	
	scanf("%d%d",&h,&w);
	for(int i =0 ; i < h ; i++)
		scanf("%s",s[i]);
	
	int maxi = 0;
	for (int i = 0 ; i < h ; i++){
		for(int j= 0 ; j < w ; j++){					
			if(s[i][j]=='#')
				continue ;
			int cnt = 0,st= j;
			while(j < w){
				if(s[i][j]=='#')
					break;
				cnt++;
				j++;
			}
			for(st=st ; st < j ; st ++)
				dp[i][st] +=cnt ;
		}
	}

	for (int i = 0 ; i < w ; i++){
		for(int j= 0 ; j < h ; j++){	

			if(s[j][i]=='#')
				continue ;
			int cnt = 0,st= j;
			while(j < h){
				if(s[j][i]=='#')
					break;
				cnt++;
				j++;
			}
			for(st=st ; st < j ; st ++)
				dp[st][i] +=cnt ;
		}
	}

	for(int i = 0 ; i < h ; i++)
		for(int j = 0 ; j < w ; j++)
			maxi = max(maxi, (int)dp[i][j]);

	printf("%d\n",maxi-1);
    return 0;
}
