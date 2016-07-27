#include<stdio.h>
int main()
{
    long long int m,n,k,a[1000],b[1000],i;

    while(scanf("%lld",&k))
    {
        if(k==0)
            break;
        scanf("%lld %lld",&m,&n);
        for(i=0;i<k;i++)
        {
            scanf("%lld %lld",&a[i],&b[i]);
        }
        for(i=0;i<k;i++)
        {
            if(a[i]==m || b[i]==n)
            {
                printf("divisa\n");
            }
            else if(a[i]>m && b[i]>n)
            {
                printf("NE\n");
            }
            else if(a[i]<m && b[i]>n)
            {
                printf("NO\n");
            }
            else if(a[i]<m && b[i]<n)
            {
                printf("SO\n");
            }
            else if(a[i]>m && b[i]<n)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
