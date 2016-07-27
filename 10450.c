#include<stdio.h>
int main()
{
    long long int n,i,j,t,a,b,c;

    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        a=0;
        b=1;
        for(j=0;j<=n;j++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("Scenario #%lld:\n%lld\n\n",i,c);
    }
    return 0;
}
