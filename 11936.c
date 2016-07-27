#include<stdio.h>
int main()
{
    long long int t,a,b,c,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a+b<=c)
        {
            printf("Wrong!!\n");
        }
        else if(b+c<=a)
        {
            printf("Wrong!!\n");
        }
        else if(c+a<=b)
        {
            printf("Wrong!!\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    return 0;
}
