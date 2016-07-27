#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,k,p,x,y,i;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        x=0;
        y=0;
        x=(k-1)+p;
        y=x%n;
        printf("Case %d: %d\n",i,y+1);
    }
    return 0;
}
