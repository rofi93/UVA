#include<stdio.h>
int main()
{
    int n,p,q,t,i,j,x[50],sum,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&p,&q);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&x[j]);
        }
        sum=count=0;
        j=1;
        while(j<=p && j<=n && sum<=q)
        {
            sum+=x[j++];
            count++;
        }
        if(sum>=q)
            count--;
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
