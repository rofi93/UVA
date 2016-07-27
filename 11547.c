#include<stdio.h>
int main()
{
    long long int t,i,n,x,y;
    while(scanf("%lld",&t)!=EOF)
    {

        for(i=1; i<=t; i++)
        {
            scanf("%lld",&n);
            x=(((((n*567)/9)+7492)*235)/47)-498;
            x=x/10;
            y=x%10;
            if(y<0)
            {
                y=y*(-1);
            }
            printf("%lld\n",y);
        }
    }
    return 0;
}
