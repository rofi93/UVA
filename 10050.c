#include<stdio.h>
#include<math.h>
int main()
{
    int h[100],p,n,t,i,j,k,count,fri,sat,x[5000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<5000;j++)
        {
            x[j]=0;
        }
        scanf("%d %d",&n,&p);
        count=0;
        for(j=0;j<p;j++)
        {
            scanf("%d",&h[j]);
        }
        for(j=0;j<p;j++)
        {
            fri=6;
            sat=7;
            for(k=1;k<=n;k++)
            {
                if(k==fri)
                {
                    fri+=7;
                    continue;
                }
                else if(k==sat)
                {
                    sat+=7;
                    continue;
                }
                if(k%h[j]==0 && x[k]==0)
                {
                    x[k]=1;
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
