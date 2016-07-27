#include<stdio.h>
#include<math.h>
int main()
{
    long long int g,l,i,t,a,b;

    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&g,&l);
        if(l%g==0)
        {
            printf("%lld %lld\n",g,l);
        }
        else
        {
            printf("-1\n");
        }
    }
}
