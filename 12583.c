#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,t,i,j,x[26],y,count,a[26];
    char name[501];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %s",&n,&k,name);
        for(j=0;j<26;j++)
        {
            x[j]=a[j]=0;
        }
        count=0;
        if(n<=k)
        {
            for(j=0;j<n;j++)
            {
                y=name[j]-65;
                x[y]++;
                if(x[y]>1)
                    count++;
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                y=name[j]-65;
                x[y]++;
                if(x[y]>1 && j-k<=a[y])
                {
                    count++;
                }
                a[y]=j;
            }
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
