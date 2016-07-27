#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2,i,j,t,k=1,n,a;
    char s1[21],s2[21],s3[21],s,s4[21];
    scanf("%d",&n);
    s=getchar();
    while(n--)
    {
        gets(s1);
        gets(s2);
        for(i=0;i<21;i++)
        {
            s3[i]=s4[i]='\0';
        }
        printf("Case %d: ",k++);
        if(strcmp(s1,s2)==0)
        {
            printf("Yes");
        }
        else
        {
            j=0;
            for(i=0; i<strlen(s1); i++)
            {
                if(s1[i]!=' ')
                {
                    s3[j++]=s1[i];
                }
            }
            j=0;
            for(i=0; i<strlen(s2); i++)
            {
                if(s2[i]!=' ')
                {
                    s4[j++]=s2[i];
                }
            }
            if(strcmp(s3,s4)==0)
            {
                printf("Output Format Error");
            }
            else
            {
                printf("Wrong Answer");
            }
        }
        printf("\n");
    }
    return 0;
}
