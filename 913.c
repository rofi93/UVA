#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j,sum,a;

    while(scanf("%lld",&n)!=EOF)
    {
        a=(n*(n+2))/2;
        j=(3*a)-6;
        printf("%lld\n",j);
    }
    return 0;
}
