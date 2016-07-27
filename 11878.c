#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a,b,c[5];
    int d,e,f,i,j=0,k,n;

    while(scanf("%d%c%d%c%s",&d,&a,&e,&b,c)!=EOF)
    {
        if(a==43)
        {
            i=d+e;
        }
        else if(a==45)
        {
            i=d-e;
        }
        f=strlen(c);
        n=0;
        for(k=0;k<f;k++)
        {
            n=(n*10)+(c[k]-48);
        }
        if(n==i)
        {
            j++;
        }
    }
    printf("%d\n",j);

    return 0;
}
