#include<cstdio>
#include<cmath>
#define MAX 1000000
using namespace std;
long int x[MAX];
void sieve_method(void)
{
    long long int i,j,s;
    x[0]=x[1]=1;
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
int main()
{
    long int i,j,n,m,p,a;
    sieve_method();
    while(scanf("%ld",&n))
    {
        if(n==0)
            break;

        a=0;
        if(x[n-2]==0)
        {
            printf("%ld = 2 + %ld\n",n,n-2);
            continue;
        }
        for(i=3; i<=n/2; i+=2)
        {
            if(x[i]==0)
            {
                j=n-i;
                if(x[j]==0 && i+j==n)
                {
                    printf("%ld = %ld + %ld\n",n,i,j);
                    a=1;
                    break;
                }

            }
            if(a==1)
                break;
        }
        if(a==0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
