#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],z[1100];
    int i,t,n,y;

    while(scanf("%s",x)!=EOF)
    {
        y=strlen(x);
        for(i=0;i<y;i++)
        {
            x[i]=x[i]*x[i+1];
        }
        printf("%s\n",x);
    }
    return 0;
}
