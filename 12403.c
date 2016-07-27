#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int n=0,t,i,j,l,a;
    char c[15];

    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",c);
        if(c[0]=='d' || c[0]=='D')
        {
            scanf("%lld",&a);
            n=a+n;
        }
        else if(c[0]=='r' || c[0]=='R')
        {
            printf("%lld\n",n);
        }
    }
    return 0;
}
