#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[21],str2[21],c[3];
    int len1,len2,i,j,t,a,k,len;
    gets(c);
    t=atoi(c);
    for(i=1; i<=t; i++)
    {
        gets(str1);
        gets(str2);
        len1=strlen(str1);
        len2=strlen(str2);
        if(len1>len2)
        {
            len=len1;
        }
        else
        {
            len=len2;
        }
        a=0;
        for(j=0,k=0; j<len; j++,k++)
        {
            if(str1[j]==' ' && str2[k]!=' ')
            {
                a=2;
                k--;
                continue;
            }
            if(str1[j]!=str2[k])
            {
                a=1;
                break;
            }
        }

        if(a==0)
            printf("Case %d: Yes\n",i);
        else if(a==1)
            printf("Case %d: Wrong Answer\n",i);
        else
            printf("Case %d: Output Format Error\n",i);
    }
    return 0;
}
