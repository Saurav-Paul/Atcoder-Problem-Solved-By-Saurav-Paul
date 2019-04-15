#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b,ans=0;
    scanf("%lld %lld",&a, &b);
    ans=max({a+(a-1),b+(b-1),a+b});
    printf("%lld\n",ans);
    return 0;
}
