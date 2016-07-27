#include<stdio.h>
int main()
{
    long long int n,k,i,j,m,p;

    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
        j=0;
        m=n;
        while(n>=k)
        {
            j=j+(n/k);
            n=(n/k)+(n%k);
        }
        printf("%lld\n",j+m);
    }
    return 0;
}
