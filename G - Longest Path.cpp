#include <bits/stdc++.h>
using namespace std;
std::vector<int> graph[100009];
std::vector<int> isvisited;
std::vector<int> max_length;
int N,M;
int dfs(int i);
int main()
{

        cin>>N>>M;
        for(int i=0; i<M; i++)
        {
                int x,y;
                cin>>x>>y;
                graph[x].push_back(y);
        }
        for(int i=0; i<=N; i++)
        {
                isvisited.push_back(0);
                max_length.push_back(0);
        }

        int max=0;
        for(int i=1; i<=N; i++)
        {
                int depth=dfs(i);
                if(max<depth)
                        max=depth;
        }


        cout<<max<<endl;

        return 0;
}
int dfs(int i){
        if(graph[i].size()==0)
                return 0;
        if(max_length[i]!=0)
                return max_length[i];
        for(int j=0; j<graph[i].size(); j++) {
                int depth=dfs(graph[i][j])+1;
                if(depth>max_length[i])
                        max_length[i]=depth;
        }

        return max_length[i];

}
