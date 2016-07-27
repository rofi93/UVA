#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,n,l,k,a;
    char c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        l=k=a=0;
        for(j=1;j<=n;j++)
        {
            getchar();
            scanf("%c",&c);
            if(c=='W' && a==0)
                l=0;
            else if(c!='W' && a==0)
                l++;
            if(l==3 && a==0)
            {
                k=j;
                a=1;
            }
        }
        if(a==1)
            printf("Case %d: %d\n",i,k);
        else
            printf("Case %d: Yay! Mighty Rafa persists!\n",i);
    }
    return 0;
}
