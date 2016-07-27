#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j,k,x,a[110],y;

    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[j]);
            }
            x=0;
            if(n==1)
            {
                y=a[0];
            }
            else if(n>1)
            {
            for(j=0;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(a[j]>a[k])
                    x=a[j];
                    a[j]=a[k];
                    a[k]=x;
                }
            }
            y=a[n-1];
            }
            printf("Case %d: %d\n",i,y);
        }
    }
    return 0;
}
