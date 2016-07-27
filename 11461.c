#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,i,c,d;

    while(scanf("%lld %lld",&a,&b)){

        if(a==0 && b==0)
            break;
            d=0;
        for(i=a;i<=b;i++)
        {
            c=sqrt(i);
            if(i==c*c)
                d++;
        }
        printf("%lld\n",d);
    }
    return 0;
}
