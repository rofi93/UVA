#include<stdio.h>
#include<math.h>
int main()
{
    long long int b,n,t,i,j,k,x,a[100000];
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        k=0;
        for(j=1;j*j<n;j++)
        {
            x=n-(j*j);
            if(x%j==0)
            {
                a[k++]=x;
            }
        }
        printf("Case %d: ",i);
        for(j=k-1;j>=0;j--)
        {
            printf("%d",a[j]);
            if(j>0)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
