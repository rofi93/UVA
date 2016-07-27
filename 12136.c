#include<stdio.h>
#include<math.h>
int main()
{
    int h1,h2,h3,h4,m1,m2,m3,m4,n,i,t,j;
    char c;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%2d%c%2d %2d%c%2d",&h1,&c,&m1,&h2,&c,&m2);
        scanf("%2d%c%2d %2d%c%2d",&h3,&c,&m3,&h4,&c,&m4);
        if(h3==h2 || h3==h1)
        {
            if(h3==h1)
            {
                printf("Case %d: Mrs Meeting\n",i);
            }
            else if(h3==h2)
            {
            if(m2>=m3)
            {
                printf("Case %d: Mrs Meeting\n",i);
            }
            else if(m2<m3)
                printf("Case %d: Hits Meeting\n",i);
            }
        }
        else if(h3<h2 && h3>h1)
        {
            printf("Case %d: Mrs Meeting\n",i);
        }
        else if(h3>h1 && h3>h2)
        {
            printf("Case %d: Hits Meeting\n",i);
        }
        else if(h4<h1 && h4<h2)
        {
            printf("Case %d: Hits Meeting\n",i);
        }
        else if(h3<h2)
        {
            printf("Case %d: Hits Meeting\n",i);
        }
    }
    return 0;
}
