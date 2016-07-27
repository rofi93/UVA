#include<stdio.h>
int main()
{
    long long int n,i,j,x=0,y;

    while(scanf("%lld",&n))
    {
        if(n<0)
            break;
        y=1;
        for(i=0;;)
        {
            y=y*2;
            i++;
            if(y>=n)
                break;
        }
        x++;
        if(n==1)
        {
            printf("Case %lld: 0\n",x);
        }
        else
        {
            printf("Case %lld: %lld\n",x,i);
        }
    }
    return 0;
}
