				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int x = n, y = m;
  if (n > m){
    swap(x, y);
  }
  for (int i = 0; i < y ; i++)
    cout << x;
  cout << endl;
  return 0;
}
