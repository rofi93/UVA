#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x;

    while(scanf("%lld",&x)!=EOF)
    {
        n=((x*x)*(x+1)*(x+1))/4;
        printf("%lld\n",n);
    }
    return 0;
}
