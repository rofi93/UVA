#include<stdio.h>
int main()
{
    char c;
    long int n=1;

    while(scanf("%c",&c)!=EOF)
    {
        if(c=='"')
        {
            if(n%2!=0)
            {
                printf("``");
            }
            else
            {
                printf("''");
            }
            n++;
        }
        else
        {
            printf("%c",c);
        }
    }
    return 0;
}
