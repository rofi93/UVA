#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,a,i,sum;
    while(scanf("%lld %lld",&n,&a)!=EOF)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=pow(a,i)*i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
