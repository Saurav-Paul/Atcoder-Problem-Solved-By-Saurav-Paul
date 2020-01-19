				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;

  vector<int> cnt(n), paisi(n);
  for (int i = 0; i < m; i++){
    int p;
    string vr;
    cin >> p >> vr;
    if(vr=="AC"){
      paisi[p - 1] = 1;
    }
    else if(vr=="WA"){
      if(paisi[p-1] == 0){
        cnt[p - 1]++;
      }
    }
    else
      assert(false);
  }
  int ac = 0, pnl = 0;
  for (int i = 0; i < n; i++){
    if(paisi[i]){
      ++ac;
      pnl += cnt[i];
    }
  }
  cout << ac << " " << pnl << endl;
  return 0;
}
