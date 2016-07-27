#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,a,b,i,j,d;
    char c[110];

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        scanf("%s",c);
            a=0;
            b=0;
            for(j=0;j<n;j++)
            {
                if(c[j]=='.')
                    a++;
                else if(c[j]=='#')
                    b++;
            }
            if(a>=1 && a<=2)
                printf("Case %d: 1\n",i);
            else
            {
                d=(a/2)+(b/2);
                printf("Case %d: %d\n",i,d);
            }
    }
    return 0;
}
