#include<stdio.h>
int main()
{
    long long int a,b,c;

    while(scanf("%lld %lld %lld",&a,&b,&c)){

        if(a==0 && b==0 && c==0)
            break;
        if(a>b && a>c)
        {
            if((b*b)+(c*c)==(a*a))
                printf("right\n");
            else printf("wrong\n");
        }
        else if(b>a && b>c)
        {
            if((a*a)+(c*c)==(b*b))
                printf("right\n");
            else printf("wrong\n");
        }
        else if((c>a && c>b))
        {
            if((a*a)+(b*b)==(c*c))
                printf("right\n");
            else printf("wrong\n");
        }

    }

    return 0;
}
