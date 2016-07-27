#include<stdio.h>
int div(long long int n)
{
    long long int d=0,r,i;
    for(i=0;;i++)
    {
        if(n%10==0)
        {
            d++;
        }
        n=n/10;
        if(n==0)
            break;
    }
    return d;
}
int main()
{
    long long int m,n,i,sum;

    while(scanf("%lld %lld",&m,&n))
    {
        if(m<0 && n<0)
            break;
        sum=0;
        for(i=m;i<=n;i++)
        {
            if(i==0)
            {
                sum++;
            }
            else
            {
                sum+=div(i);
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
