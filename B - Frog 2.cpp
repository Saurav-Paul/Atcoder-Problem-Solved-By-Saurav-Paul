#include <bits/stdc++.h>
using namespace std;
vector<int> stoneHeight;
vector<int> cost;
int main(){
        int N,K;
        scanf("%d%d",&N,&K);
        for(int i=0; i<N; i++) {
                int temp;
                scanf("%d",&temp);
                stoneHeight.push_back(temp);
                cost.push_back(INT_MAX);
        }
        cost[0]=0;
        for(int i=0; i<N; i++) {
                for(int j=1; j<=K; j++) {
                        if(i+j<N) {

                                int difcost=abs(stoneHeight[i]-stoneHeight[i+j])+cost[i];
                                if(cost[i+j]>difcost)
                                        cost[i+j]=difcost;

                        }
                        else{
                                break;
                        }
                }
        }
        cout<<cost[N-1]<<endl;


        return 0;
}
