#include<stdio.h>
int main()
{
    int t,n,a[1000],b,c,i,j,k;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        b=0;
        if(n==1)
            printf("Case %d: %d\n",i,a[0]);
        else if(n>1)
        {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    b=a[k];
                    a[k]=a[j];
                    a[j]=b;
                }
            }
        }
        printf("Case %d: %d\n",i,a[0]);
        }
    }
    return 0;
}
