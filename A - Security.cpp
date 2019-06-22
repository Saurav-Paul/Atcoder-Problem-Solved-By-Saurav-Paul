#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin >> s;
 bool flag = true;
 for(int i =1 ; i < s.size() ; i++){
 	if(s[i]==s[i-1]){
      flag = false;
      break ;
    }
 }
 cout << (flag?"Good":"Bad") << endl;
  
  return 0;
}
