#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,e,l,x,n;

    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l))
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        n=0;
        for(x=0;x<=l;x++)
        {
            e=(a*x*x)+(b*x)+c;
            if(e%d==0)
            {
                n++;
            }
        }
        printf("%lld\n",n);
    }
    return 0;
}
