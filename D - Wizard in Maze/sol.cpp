

/**
 *    author        : Saurav Paul 
 *    created       : August 24, 2020 11:46 AM
 *    Problem Name  : D - Wizard in Maze
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc176/tasks/abc176_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

const int nax = 1e3 + 10 ;
const int INF = 1e9 + 90 ;
int H , W ;
int sx , sy , fx , fy ;
char grid[nax][nax] ;
int dist[nax][nax] ;
int dx[] = {-1,1,0,0} ;
int dy[] = {0,0,-1,1} ;

class Prop{
    public :
        int x , y , cost ;
        Prop(){
            x = y = cost = 0 ;
        }
        void update(int a, int b,int c){
            x = a , y = b , cost = c ;
        }
}temp,curr;

class Compare{
    public :
        bool operator()(Prop a , Prop b){
            return a.cost > b.cost ;
        }

};
bool legal(int x , int y){
    if(x < 0 || x >= H || y < 0 || y >= W || grid[x][y] =='#') return false ;
    return true ;
}

void solve(){

    scanf("%d%d",&H,&W) ;
    scanf("%d%d%d%d",&sx,&sy,&fx,&fy) ;
    sx -- ; sy-- ; fx-- ; fy-- ;

    for(int i = 0 ; i < H ; i++){
        scanf("%s",grid[i]) ;
    }

    priority_queue<Prop,vector<Prop>,Compare> PQ ;
    temp.update(sx,sy,0) ;
    PQ.push(temp) ;

    for(int i = 0 ; i < H ;i++){
        for(int j = 0 ; j < W ; j++){
            dist[i][j] = INF ;
        }
    }

    dist[sx][sy] = 0 ;
    while(!PQ.empty()){
        curr = PQ.top() ;
        PQ.pop() ;
        int x = curr.x ;
        int y = curr.y ;
        int cost = curr.cost ;

        for(int d = 0 ; d < 4 ; d++){
            int nx = x + dx[d] ;
            int ny = y + dy[d] ;

            if(!legal(nx,ny)) continue ;

            if(dist[nx][ny] > dist[x][y]){
                dist[nx][ny] = dist[x][y] ;
                temp.update(nx,ny,dist[nx][ny]) ;
                PQ.push(temp) ;
            }
        }

        for(int nx = x - 2 ; nx <= x + 2 ; nx ++){
            for(int ny = y - 2 ; ny <= y + 2 ; ny ++){
                if(!legal(nx,ny)) continue ;
                if(dist[nx][ny] > dist[x][y] + 1){
                    dist[nx][ny] = dist[x][y] + 1 ;
                    temp.update(nx,ny,dist[nx][ny]) ;
                    PQ.push(temp) ;
                }
            }
        }
    }
    if(dist[fx][fy] == INF) puts("-1") ;
    else printf("%d\n",dist[fx][fy]) ;

}

int main(){

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
