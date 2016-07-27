#include<stdio.h>
#include<string.h>
int main()
{
    char str[110],x[110],str1[10];
    int n,i,t,p,j,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        p=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%s",str);
            if(str[0]=='L')
            {
                x[j]='L';
                p--;
            }
            else if(str[0]=='R')
            {
                x[j]='R';
                p++;
            }
            else
            {
                scanf("%s %d",str1,&a);
                if(x[a]=='L')
                    p--;
                else
                    p++;

                x[j]=x[a];
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
