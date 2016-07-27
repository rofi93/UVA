#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[10001],str2[100][101],ch[10];
    int i,l,j,k,n,len,t;
    gets(ch);
    t=atoi(ch);
    for(i=0;i<t;i++)
    {
        gets(str1);
        len=strlen(str1);
        n=sqrt(len);
        if(n*n==len)
        {
            l=0;
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    str2[j][k]=str1[l++];
                }
            }
            l=0;
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    str1[l++]=str2[k][j];
                }
            }
            printf("%s\n",str1);
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return 0;
}
