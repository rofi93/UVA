#include<stdio.h>
#include<math.h>
int add_digs(long long int a)
{
    long long int i,n=0,r;
    for(i=0;;i++)
    {
        r=a%10;
        n=n+r;
        a=a/10;
        if(a==0)
            break;
    }
    return n;
}
int main()
{
    long long int t1,t2,N,n,i,j,d,s,a,p,k,t;
    scanf("%lld",&N);
    for(i=0;i<N;i++)
    {
        scanf("%lld %lld",&t1,&t2);
            t=0;
        for(k=t1;k<=t2;k++)
        {
            n=0;
            s=sqrt(k);
            for(j=2;j<=s;j++)
            {
                if(k%j==0)
                {
                    n++;
                    break;
                }
            }
            if(n==0)
            {
                a=add_digs(k);
                s=sqrt(a);
                p=0;
                for(j=2;j<=s;j++)
                {
                    if(a%j==0)
                    {
                        p++;
                        break;
                    }
                }
                if(p==0)
                    t++;
            }
        }
            printf("%lld\n",t);
        }

    return 0;
}
