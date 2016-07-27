#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,a,b,i,j,d,count;
    char c[110];

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        scanf("%s",c);
            a=0;
            b=0;
            for(j=0;j<n;)
            {
                if(c[j]=='.')
                {
                    a++;
                    j+=3;
                }
                else if(c[j]=='#')
                {
                    j++;
                }
            }
            printf("Case %d: %d\n",i,a);
    }
    return 0;
}
