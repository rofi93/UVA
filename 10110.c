#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j,k;
    while(scanf("%lld",&n))
    {
        if(n==0)
           break;
        k=sqrt(n);
        j=k*k;
        if(j==n)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

    }
        return 0;
}
