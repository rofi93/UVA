#include<stdio.h>
#include<math.h>
int main()
{
    int a,f,i,j,l,m,t,p;
    scanf("%d",&t);
    {
    for(p=1;p<=t;p++)
    {
    if(p>1)
        printf("\n");
    scanf("%d",&a);
    scanf("%d",&f);
    for(i=1;i<=f;i++)
    {
        if(i>1)
            printf("\n");
        for(j=1;j<=a;j++)
        {
            for(l=0;l<j;l++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        for(m=a-1;m>0;m--)
        {
            for(l=m;l>0;l--)
            {
                printf("%d",m);
            }
            printf("\n");
        }
    }
    }
    }
    return 0;
}
