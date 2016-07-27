#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,e,f;

    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e))
    {
        if(a==0 && b==0 && c==0 && d==0 && e==0)
            break;
        f=a*b*c*(d*d)*(e*e);
        printf("%lld\n",f);
    }
    return 0;
}
