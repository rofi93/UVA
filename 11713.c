#include<stdio.h>
#include<string.h>
int vowel(char x)
{
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        return 1;
    else
        return 0;
}
int main()
{
    char str1[25],str2[25];
    int len1,len2,i,t,j,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s %s",str1,str2);
        len1=strlen(str1);
        len2=strlen(str2);
        a=0;
        if(len1==len2)
        {
            for(j=0;j<len1;j++)
            {
                if(!vowel(str1[j]))
                {
                    if(str1[j]!=str2[j])
                    {
                        a=1;
                        break;
                    }
                }
            }
        }
        else
            a=1;

        if(a==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
