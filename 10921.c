#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char str[35];
    int i,j,k,n,a,b;

    while(scanf("%s",str)!=EOF)
    {
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            if(str[i]>='A' && str[i]<='C')
                str[i]=50;
            else if(str[i]>='D' && str[i]<='F')
                str[i]=51;
            else if(str[i]>='G' && str[i]<='I')
                str[i]=52;
            else if(str[i]>='J' && str[i]<='L')
                str[i]=53;
            else if(str[i]>='M' && str[i]<='O')
                str[i]=54;
            else if(str[i]>='P' && str[i]<='S')
                str[i]=55;
            else if(str[i]>='T' && str[i]<='V')
                str[i]=56;
            else if(str[i]>='W' && str[i]<='Z')
                str[i]=57;
        }
        printf("%s\n",str);
    }
    return 0;
}
