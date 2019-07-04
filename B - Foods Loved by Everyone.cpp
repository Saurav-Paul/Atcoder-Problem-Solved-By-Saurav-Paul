#include<bits/stdc++.h>
using namespace std;
int main()
{
	int people , item;
	scanf("%d%d",&people,&item);
	int items[item+1] = {};
	for(int i = 0 ; i < people ; i++){
		int foods;
		scanf("%d",&foods);
		while(foods--){
			int x;
			scanf("%d",&x);
			items[x] ++;
		}
	}
	int cnt = 0;
	for(int i = 1; i <= item ; i++)
		if(items[i]==people)
			cnt++;
	
	printf("%d\n",cnt);
	
}
