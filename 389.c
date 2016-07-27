#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int sum,i,j,n,x,y,k,a[50];
    char s[10];
    while(scanf("%s %lld %lld",s,&x,&y)!=EOF)
    {
        j=0;
        sum=0;
        n=strlen(s);
        for(i=n-1;i>=0;i--)
        {
            if(s[i]>='0' && s[i]<='9')
                k=s[i]-48;
            else if(s[i]>='A' && s[i]<='F')
                k=s[i]-55;
            sum+=pow(x,j)*k;
            j++;
        }

    }
    return 0;
}
