#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int i,n,j,num;
    while(gets(str))
    {
        n=strlen(str);
        num=0;
        for(i=0;i<n;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                num+=str[i]-48;
            }
            else if(str[i]=='b')
            {
                for(j=0;j<num;j++)
                {
                    printf(" ");
                }
                num=0;
            }
            else if(str[i]=='!')
            {
                printf("\n");
                num=0;
            }
            else if(str[i]=='*')
            {
                for(j=0;j<num;j++)
                {
                    printf("*");
                }
                num=0;
            }
            else
            {
                for(j=0;j<num;j++)
                {
                    printf("%c",str[i]);
                }
                num=0;
            }
        }
        printf("\n");
    }
    return 0;
}
