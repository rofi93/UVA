#include<stdio.h>
#include<math.h>
long long int H(int n)
{
      long long int i,res = 0;

     for(i=1;i<=n/2;i++)
    {
        res = (res + n/i);
    }

     return res;
}
int main()
{
    long long int n,t,i,a,b,c;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        a=H(n);
        b=ceil((float)n/2);
        c=a+b;
        printf("%lld\n",c);
    }
    return 0;
}
