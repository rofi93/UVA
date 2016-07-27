#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    long long int n[10000],i=0,j,k,temp,x;

    while(scanf("%lld",&n[i])!=EOF)
    {
        x=0;
        if(n[i]==0)
        {
            continue;
        }
        i++;
        sort(n,n+i);
        if(i%2!=0)
        {
            x=((i-1)/2);
            printf("%lld\n",n[x]);
        }
        else if(i%2==0)
        {
            x=(n[(i-1)/2]+n[i/2])/2;
            printf("%lld\n",x);
        }
    }
    return 0;
}
