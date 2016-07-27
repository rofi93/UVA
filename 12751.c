#include<stdio.h>
int main()
{
    long int t,i,n,k,x,j,sum;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld %ld",&n,&k,&x);
        sum=0;
        for(j=1;j<=n;j++)
        {
            if(j==x)
            {
                j+=k;
            }
            sum+=j;
        }
        printf("Case %ld: %ld\n",i,sum);
    }
    return 0;
}
