#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
char grid[1010][1010];
long long int isvisited[1010][1010];
int H,W;
int main()
{


        cin>>H>>W;
        for(int i=0; i<H; i++)
                for(int j=0; j<W; j++)
                        cin>>grid[i][j];

        for(int i=0; i<H; i++) {
                if(i==0) {
                        for(int j=0; j<W; j++)
                        {
                                if(grid[i][j]=='#')
                                        break;
                                isvisited[i][j]=1;
                        }

                        for(int j=0; j<H; j++)
                        {
                                if(grid[j][i]=='#')
                                        break;
                                isvisited[j][i]=1;
                        }
                }

                else
                for(int j=1; j<W; j++) {
                        if(grid[i][j]=='.'){
                                isvisited[i][j]=(isvisited[i-1][j]+isvisited[i][j-1])%mod;

                                }

                }

        }
        cout<<isvisited[H-1][W-1]<<endl;

}
