#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
long long H(int n)
{
    if(n==0)
        return 0;
    long long int res = 0;
    int i,s=sqrt(n);
    if((s*s)==n)
    {
        res+=n/s;
        s--;
    }

    for(i=1; i<=s; i++)
    {
        res+=n/i;
        res+=max(0,n/i-s);
    }

    return res;
}
int main()
{
    long long int n,t,i,a;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",H(n));
    }
    return 0;
}
