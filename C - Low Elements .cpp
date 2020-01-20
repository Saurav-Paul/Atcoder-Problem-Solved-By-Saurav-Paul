				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int mn = 1e9;
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (mn >= x)
      cnt++;
    mn = min(mn, x);
  }
  cout << cnt << endl;
  return 0;
}
