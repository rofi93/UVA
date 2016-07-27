#include<stdio.h>
int main()
{
    int t,n,i,j,a[11],x;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[j]);
            }
            x=(n/2);
            printf("Case %d: %d\n",i,a[x]);
        }
    }
    return 0;
}
