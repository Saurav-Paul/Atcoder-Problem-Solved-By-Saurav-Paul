#include <bits/stdc++.h>
using namespace std;
vector<int>height;
vector<int>cost;
int n;

int main()
{

        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
                int temp;
                scanf("%d",&temp);
                height.push_back(temp);
                if(!i)
                {
                        cost.push_back(0);
                }
                cost.push_back(INT_MAX);
        }

        for(int i=0; i<n; i++)
        {
                if(i+1<n)
                {
                        int dif=abs(height[i]-height[i+1])+cost[i];
                        if(cost[i+1]>dif)
                                cost[i+1]=dif;

                }
                if(i+2<n)
                {
                        int dif=abs(height[i]-height[i+2])+cost[i];
                        if(cost[i+2]>dif)
                                cost[i+2]=dif;

                }

        }
        cout<<cost[n-1]<<endl;

        return 0;
}
