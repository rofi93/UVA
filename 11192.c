#include<stdio.h>
#include<string.h>
int main()
{
    int g,i,j,n,k,l,a,b;
    char str1[101],str2[101];
    while(scanf("%d",&a))
    {
        if(a==0)
            break;
        scanf("%s",str1);
        for(i=0;i<101;i++)
        {
            str2[i]='\0';
        }
        n=strlen(str1);
        g=n/a;
        k=0;
        l=g-1;
        for(i=0;i<n;i+=g)
        {
            for(j=l;j>=i;j--)
            {
                str2[k++]=str1[j];
            }
            l+=g;
        }
        printf("%s\n",str2);
    }
    return 0;
}
