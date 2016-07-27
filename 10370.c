#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j,k;
    float a[1010],avg,x,y,avg_std;

    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            x=0;
            scanf("%d",&n);
            for(j=0;j<n;j++)
            {
                scanf("%f",&a[j]);
                x=x+a[j];
            }
            avg=x/n;
            y=0;
            for(j=0;j<n;j++)
            {
                if(a[j]>avg)
                    y++;
            }
            avg_std=(y*100)/n;
            printf("%.3f%%\n",avg_std);
        }
    }
    return 0;
}
