				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  int n, k, m;
  cin >> n >> k >> m;
  int sum = 0;
  for (int i = 1; i < n; i++){
    int x;
    cin >> x;
    sum += x;
  }
  int lagbe = n * m;
  int baki = lagbe - sum;
  cout << (baki > k ? -1 : max(baki, 0)) << endl;
  return 0;
}
