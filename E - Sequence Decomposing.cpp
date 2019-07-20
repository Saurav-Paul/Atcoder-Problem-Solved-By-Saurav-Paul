#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; scanf("%d",&n);

	multiset<int> mul;
	
	for(int i = 0 ; i < n ; i++){
		int temp ; scanf("%d",&temp);
		
		auto indx = mul.lower_bound(temp);
		if(indx != mul.begin()){
			indx--;
			mul.erase(indx);
			mul.insert(temp);
		}
		else
			mul.insert(temp);
		
	}
	cout << (int) mul.size() << endl;
	
	return 0;
}
