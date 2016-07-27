#include <stdio.h>

int main()
{
        long long int n;
        while(scanf("%lld",&n)!=EOF)
        {
           printf("%lld\n",(n/2+2)*(n/2+1)/2);
        }
    return 0;
}
