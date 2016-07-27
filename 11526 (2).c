#include<stdio.h>
long long int H(int n)
{
      long long int i,res = 0;

     for(i=1;i<=n;i=i+1)
    {
        res = (res + n/i);
    }

     return res;
}
int main()
{
    long long int n,t,i,a;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",H(n));
    }
    return 0;
}
