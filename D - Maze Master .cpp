				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

const int INF = 1e9 + 90;

int bfs(vector<string> &ara, int r, int c,pii start)
{

  queue<pii> Q;
  Q.push(start);
  vector<vector<int>> dist(r, vector<int>(c , -1));
  dist[start.first][start.second] = 0;
  while (!Q.empty())
  {
    pii now = Q.front();
    Q.pop();
    int curr = dist[now.first][now.second];
    int x = now.first, y = now.second;
    // left
    if (x > 0 && ara[x-1][y] != '#' && dist[x-1][y] == -1){
      pii nw = {x - 1, y};
      Q.push(nw);
      dist[x - 1][y] = curr + 1;
    }
    // up
    if (y > 0 && ara[x][y-1] != '#' && dist[x][y-1] == -1)
    {
      pii nw = {x, y-1};
      Q.push(nw);
      dist[x][y-1] = curr + 1;
    }
    // right
    if (x + 1 < r && ara[x + 1][y] != '#' && dist[x + 1][y] == -1)
    {
      pii nw = {x + 1, y};
      Q.push(nw);
      dist[x + 1][y] = curr + 1;
    }
    // down

    if (y + 1 < c && ara[x][y+1] != '#' && dist[x][y+1] == -1)
    {
      pii nw = {x, y+1};
      Q.push(nw);
      dist[x][y+1] = curr + 1;
    }
  }
  int mx = 0;
  for (int i = 0; i < r ; i++){
    for (int j = 0; j < c ; j++){
      mx = max(mx, dist[i][j]);
    }
  }
  return mx;
}

int main()
{
  ios_base::sync_with_stdio(false);
  int r, c;
  cin >> r >> c;
  vector<string> ara(r);
  for(auto &x : ara)
    cin >> x;
  int mx = 0;
  for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++){
      if(ara[i][j] == '#')
        continue;
      pii x = {i, j};
      mx = max(mx, bfs(ara, r, c,x));
    }
  }
  cout << mx << endl;
  return 0;
}
