				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

vector< vector<pair<int,int>> > graph(1, vector<pair<int,int> > () ) ;
int main()
{
	
	int n ; scanf("%d",&n) ;
	graph = vector< vector<pair<int,int> > > (n+1,vector<pair<int,int> > ()) ;

	vector<int> indegree(n+1) , extra(n+1) ;

	for(int i = 1 ; i < n; i++){
		int x , y ; scanf("%d%d",&x,&y) ;
		indegree[x] ++;
		indegree[y] ++;
		graph[x].emplace_back(y,i) ;
		graph[y].emplace_back(x,i) ;

	}
	vector<int> color(n+1 , -1) ;

	for(int i = 1 ; i <= n ; i ++){
		if(indegree[i] == extra[i]) continue ;
		bool ase[n+1] = {} ;
		int point = 1 ;
		vector<int> t_point ;
		for(auto x : graph[i]){
			int t = x.second ;
			if(color[t] != -1){
				ase[color[t]] = true ;  
			}
			else t_point.emplace_back(t) , extra[x.first]++;
		}
		for(auto x : t_point){

			while(ase[point]){
				point ++ ;
			}
			color[x] = point ++ ;

		}
	}

	cout << *max_element(color.begin() , color.end() ) << endl ;
	for(int i = 1; i < n ; i++){
		cout << color[i] << endl ;
	}


    return 0;
}
