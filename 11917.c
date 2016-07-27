#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000][30],assign[30];
    int n,d,i,j,t,day[1000],a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%s %d",str[j],&day[j]);
        }
        scanf("%d %s",&d,assign);
        a=0;
        for(j=0;j<n;j++)
        {
            if(strcmp(assign,str[j])==0)
            {
                if(day[j]<=d)
                {
                    a=1;
                    printf("Case %d: Yesss\n",i);
                    break;
                }
                else if(day[j]>d && day[j]<=d+5)
                {
                    a=1;
                    printf("Case %d: Late\n",i);
                    break;
                }
                else if(day[j]>d+5)
                {
                    a=1;
                    printf("Case %d: Do your own homework!\n",i);
                    break;
                }
            }
        }
        if(a==0)
        {
            printf("Case %d: Do your own homework!\n",i);
        }
    }
    return 0;
}
