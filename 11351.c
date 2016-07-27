#include<stdio.h>
int main()
{
    long int x[100000],i,j,k,l,n,t,count,exe,last;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld",&n,&k);
        for(j=1;j<=n;j++)
        {
            x[j]=0;
        }
        count=exe=0;
        for(j=1;;j++)
        {
            if(j>n)
                j=1;
            if(x[j]==0)
                count++;
            if(count==k)
            {
                x[j]=1;
                count=0;
                exe++;
            }
            if(exe==n-1)
            {
                for(l=1;l<=n;l++)
                {
                    if(x[l]==0)
                        break;
                }
                break;
            }
        }
        printf("Case %ld: %ld\n",i,l);
    }
    return 0;
}
