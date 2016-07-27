#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[101],str2[101];
    long int n,i,j,x,len;
    while(gets(str1))
    {
        if(str1[0]=='0' && str1[1]=='x')
        {
            len=strlen(str1);
            x=n=j=0;
            for(i=len-1;i>=2;i--)
            {
                if(str1[i]>='0' && str1[i]<='9')
                    x=str1[i]-48;
                else
                    x=str1[i]-55;
                n+=pow(16,j)*x;
                j++;
            }
            printf("%ld\n",n);
        }
        else
        {
            n=atoi(str1);
            if(n<0)
                break;
            printf("0x%X\n",n);
        }
    }
    return 0;
}
