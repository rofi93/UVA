#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<iomanip>
using namespace std;

long long int n,m,d,c,i;

long long int fact(long long a, long long b)
{
    b=min(b,a-b);
    c=1;
    for(i=1; i<=b; i++)
    {
        c=c*(a-b+i);
        c=c/i;
    }
    return c;
}
int main()
{
    while(scanf("%lld %lld",&n,&m))
    {
        if(n==0 && m==0)
            break;
        d=fact(n,m);
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,d);
    }
    return 0;
}
