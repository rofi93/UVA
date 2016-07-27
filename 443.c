#include<stdio.h>
#include<math.h>
long long int x[6000];
void humble(void)
{
    long long int i,j,n,k;
    j=1;
    x[j++]=1;
    for(k=2;;k++)
    {
        if(j==5845)
            break;
        if(factor(k))
        {
            x[j++]=k;
        }
    }
}
int factor(long long int n)
{
    long long int i=2,f[100],s,j=0,a=0;
    s=sqrt(n);
    while(i<=n)
    {
        if(i>s && j==0)
        {
            f[j++]=n;
            break;
        }
        if(n%i!=0)
            i++;
        else
        {
            f[j++]=i;
            n=n/i;
        }
    }
    for(i=0;i<j;i++)
    {
        if(f[i]==2 || f[i]==3 || f[i]==5 || f[i]==7)
            continue;
        else
        {
            a=1;
            break;
        }
    }
    if(a==0)
        return 1;
    else if(a==1)
        return 0;
}
int main()
{
    long long int n,i,j;
    humble();
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        printf("%lld\n",x[n]);
    }
    return 0;
}
