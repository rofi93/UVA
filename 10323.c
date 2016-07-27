#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n,i,a;

    while(scanf("%llu",&n)!=EOF)
    {
        a=1;
        for(i=1;i<=n;i++)
        {
            a=a*i;
        }
        if(a<10000)
            printf("Underflow!\n");
        else if(a>6227020800)
            printf("Overflow!\n");
        else if(a>=10000 && a<=6227020800)
            printf("%llu\n",a);
    }
    return 0;
}
