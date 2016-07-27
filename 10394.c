#include<stdio.h>
#include<math.h>
#define MAX 20000010
long long int x[MAX],p[MAX];
void sieve(void)
{
    long long int i,j,s;
    for(i=4; i<=MAX; i+=2)
    {
        x[i]=1;
    }
    s=sqrt(MAX);
    for(i=3; i<=s; i+=2)
    {
        if(x[i]==0)
        {
            for(j=i+i; j<=MAX; j+=i)
            {
                x[j]=1;
            }
        }
    }
}
void twin_prime(void)
{
    long long int i,j=1;
    for(i=3;i<=MAX;i+=2)
    {
        if(x[i]==0 && x[i+2]==0)
        {
            p[j++]=i;
        }
    }
}
int main()
{
    long long int n,i,a;
    sieve();
    twin_prime();
    while(scanf("%lld",&n)!=EOF)
    {
        printf("(%lld, %lld)\n",p[n],p[n]+2);
    }
    return 0;
}
