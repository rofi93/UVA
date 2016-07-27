#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;
long long int a[2000005],i,n;

int main()
{

    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            printf("%lld",a[i]);
            if(i<n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
