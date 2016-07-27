#include<stdio.h>
int main()
{
    int n,a[1001],i,j,sum,temp;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sum=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    sum++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",sum);
    }
    return 0;
}
