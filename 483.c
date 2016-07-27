#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[1001],str2[1001];
    int i,n,j,s,k,a,b;
    while(gets(str1))
    {
        n=strlen(str1);
        for(i=0;i<1001;i++)
        {
            str2[i]='\0';
        }
        k=s=a=0;
        for(i=0;i<n;i++)
        {
            if(str1[i]==' ')
            {
                if(ispunct(str1[i]))
                {
                    str2[k++]=str1[i];
                }
                for(j=i-1;j>=s;j--)
                {
                    str2[k++]=str1[j];
                }
                str2[k++]=' ';
                s=i+1;
            }
        }
        for(i=n-1;i>=s;i--)
        {
            str2[k++]=str1[i];
        }
        printf("%s\n",str2);
    }
    return 0;
}
