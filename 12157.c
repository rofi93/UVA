#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j,k[25],mile,juice,M,J;

        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            for(j=0;j<n;j++)
            {
                scanf("%d",&k[j]);
            }
            M=0;
            mile=0;
            for(j=0;j<n;j++)
            {
                M=(k[j]/30)+1;
                mile=(M*10)+mile;
            }
            J=0;
            juice=0;
            for(j=0;j<n;j++)
            {
                J=(k[j]/60)+1;
                juice=(J*15)+juice;
            }
            if(mile<juice)
            {
                printf("Case %d: Mile %d\n",i,mile);
            }
            else if(juice<mile)
            {
                printf("Case %d: Juice %d\n",i,juice);
            }
            else if(mile==juice)
            {
                printf("Case %d: Mile Juice %d\n",i,mile);
            }
        }
        return 0;
}
