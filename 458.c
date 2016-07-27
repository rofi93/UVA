#include<stdio.h>
int main()
{
    char c;
    int i,n;

    while(scanf("%c",&c)!=EOF)
    {
        if(c=='\n')
        {
            printf("\n");
        }
        else if(c==' ')
        {
            printf(" ");
        }
        else
        {
            n=c;
            n=n-7;
            c=n;
            printf("%c",c);
        }
    }
    return 0;
}
