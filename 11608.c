#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n[20],r[20],s,i,j,c=1;
    while(scanf("%d",&s))
    {
        if(s<0)
            break;
        n[0]=s;
        for(i=1;i<=12;i++)
        {
            scanf("%d",&n[i]);
        }
        for(i=0;i<12;i++)
        {
            scanf("%d",&r[i]);
        }
        printf("Case %d:\n",c++);
        for(i=0;i<12;i++)
        {
            if(n[i]>=r[i])
            {
                n[i+1]=n[i+1]+n[i]-r[i];
                printf("No problem! :D\n");
            }
            else
            {
                n[i+1]=n[i+1]+n[i];
                printf("No problem. :(\n");
            }
        }
    }
    return 0;
}
