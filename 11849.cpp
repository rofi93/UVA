#include<cstdio>
#include<iostream>
#include<set>
using namespace std;
long long int x[1000000],y[1000000];
int main()
{
    long long int n,m,i,l,j,count;
    while(scanf("%lld %lld",&n,&m))
    {
        if(n==0 && m==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x[i]);
        }
        l=count=0;
        for(i=0;i<m;i++)
        {
            scanf("%lld",&y[i]);
            for(;l<m;l++)
            {
                if(x[l]>y[i])
                {
                    l=j;
                    break;
                }
                if(y[i]==x[l])
                {
                    j=l;
                    count++;
                    break;
                }
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
