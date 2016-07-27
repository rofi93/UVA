#include<stdio.h>
#include<math.h>
int add_square_digs(long long int a)
{
    long long x,y,z=0;

    for(x=0;; x++)
    {
        y=a%10;
        z=(y*y)+z;
        a=a/10;
        if(a==0)
            break;
    }
    return z;
}
int main()
{
    long long int n,i,j,k,a,b,c,t;

    while(scanf("%lld",&t)!=EOF)
    {
        for(k=1; k<=t; k++)
        {
            scanf("%lld",&n);
            b=n;
            for(j=0; j<=n; j++)
            {
                c=add_square_digs(n);
                n=c;
                if(c==1)
                    break;
            }
            if(c==1)
                printf("Case #%lld: %lld is a Happy number.\n",k,b);
            else if(c!=1)
                printf("Case #%lld: %lld is an Unhappy number.\n",k,b);
        }
    }
    return 0;
}
