#include <bits/stdc++.h>
using namespace std;
std::vector<int> days[3];
std::vector<int> cost[3];
int main(){
        int n;
        cin>>n;
        for(int i=0; i< n; i++) {
                int a,b,c;
                cin>>a>>b>>c;
                days[0].push_back(a);
                days[1].push_back(b);
                days[2].push_back(c);
                if(!i) {
                        cost[0].push_back(a);
                        cost[1].push_back(b);
                        cost[2].push_back(c);
                }
                else{
                        cost[0].push_back(0);
                        cost[1].push_back(0);
                        cost[2].push_back(0);
                }
        }

        for(int i=0; i<n-1; i++) {
                //activity a
                if(cost[i+1][1]<cost[i][0]+days[i+1][1])
                        cost[i+1][1]=cost[i][0]+days[i+1][1];

                if(cost[i+1][2]<cost[i][0]+days[i+1][2])
                        cost[i+1][2]=cost[i][0]+days[i+1][2];

                //activity b
                if(cost[i+1][0]<cost[i][1]+days[i+1][0])
                        cost[i+1][0]=cost[i][1]+days[i+1][0];

                if(cost[i+1][2]<cost[i][1]+days[i+1][2])
                        cost[i+1][2]=cost[i][0]+days[i+1][2];

                //activity c
                if(cost[i+1][0]<cost[i][2]+days[i+1][0])
                        cost[i+1][0]=cost[i][2]+days[i+1][0];

                if(cost[i+1][1]<cost[i][2]+days[i+1][1])
                        cost[i+1][1]=cost[i][2]+days[i+1][1];

        }

        int max=cost[n-1][0];
        if(max<cost[n-1][1])
                max=cost[n-1][1];
        if(max<cost[n-1][2])
                max=cost[n-1][2];
        cout<<max<<endl;

        return 0;
}
