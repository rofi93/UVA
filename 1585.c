#include<stdio.h>
#include<math.h>
#include<string.h>
#include<strings.h>
int main()
{
    char c[80];
    int t,n,i,j,l,p;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",c);
        l=strlen(c);
        n=0;
        p=0;
        for(j=0;j<l;j++)
        {
            if(c[j]=='o' || c[j]=='O')
            {
                n++;
                p=n+p;
            }
            else if(c[j]=='x' || c[j]=='X')
            {
                n=0;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
