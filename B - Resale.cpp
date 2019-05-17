#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
vector<int> v, c;
int temp;
for(int i=0; i<n ;i++)
   cin>>temp,v.emplace_back(temp);
for(int i=0;i<n; i++)
    cin>>temp,c.emplace_back(temp);
int total=0;
for(int i=0;i<n;i++){
    if(c[i]<v[i])
        total+=(v[i]-c[i]);
}
cout<<total<<endl;
}
