#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,n_m[110],n_e[110],d,r,i,sum,j,total;

    while(scanf("%lld %lld %lld",&n,&d,&r))
    {
        if(n==0 && d==0 && r==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&n_m[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&n_e[i]);
        }
        sort(n_m,n_m+n);
        sort(n_e,n_e+n);
        sum=total=0;
        for(i=0;i<n;i++)
        {
            total=n_m[i]+n_e[n-1-i];
            if(total>d)
                sum+=(total-d);
        }
        sum=sum*r;
        printf("%lld\n",sum);
    }
    return 0;
}
