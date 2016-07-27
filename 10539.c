#include<stdio.h>
#include<math.h>
int prime(long long int n)
{
    long long int i,a=0,s;
    if(n==1)
        return 0;
    s=sqrt(n);
    for(i=2;i<=s;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(a==0)
        return 1;
    else
        return 0;
}
int main()
{
    long long int t,i,low,high,n,j,k,s,p;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&low,&high);
        n=0;
        for(j=low;j<=high;j++)
        {
            s==sqrt(j);
            p=0;
            for(k=2;k<=s;k++)
            {
                if(j%k==0 && prime(k))
                {
                    p++;
                }
                if(p==2)
                    break;
                else if(p==1)
                    n++;
            }
        }
        printf("%lld\n",n);
    }
    return 0;
}
