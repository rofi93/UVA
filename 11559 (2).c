#include<stdio.h>
int main()
{
    long long int i,n,b,h,w,p,a,cost,j,k,x;
    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)!=EOF)
    {
        cost=b;
        x=0;
        for(j=0;j<h;j++)
        {
            scanf("%lld",&p);
            for(k=0;k<w;k++)
            {
                scanf("%lld",&a);
                if(n<=a && (p*n)<=cost)
                {
                    x=1;
                    cost=p*n;
                }
            }
        }
        if(x==0)
        {
            printf("stay home\n");
        }
        else
        {
            printf("%lld\n",cost);
        }
    }
    return 0;
}
