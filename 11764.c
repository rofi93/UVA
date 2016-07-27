#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n,j,a[50],k,x,y;

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
            y=0;
            if(n>1)
            {
            for(j=0;j<n-1;j++)
            {
                for(k=j+1;;k++)
                {
                    if(a[j]>a[k])
                        y++;
                    else if(a[j]<a[k])
                        x++;
                        break;
                }
            }
            }
            printf("Case %d: %d %d\n",i,x,y);
        }
    }
    return 0;
}
