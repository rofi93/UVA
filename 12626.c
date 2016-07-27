#include<stdio.h>
#include<string.h>
int main()
{
    int z,n,j,l,m,a,r,g,i,t,p;
    char str[1000];

    scanf("%d",&n);
    for(z=0;z<n;z++)
    {
        scanf("%s",str);
        l=strlen(str);
        m=0;
        a=0;
        r=0;
        g=0;
        i=0;
        t=0;
        p=0;
        for(j=0;j<l;j++)
        {
            if(str[j]=='M')
                m++;
            else if(str[j]=='A')
                a++;
            else if(str[j]=='R')
                r++;
            else if(str[j]=='G')
                g++;
            else if(str[j]=='I')
                i++;
            else if(str[j]=='T')
                t++;
        }
        for(j=0;;j++)
        {
            if(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1)
            {
                m=m-1;
                a=a-3;
                r=r-2;
                g=g-1;
                i=i-1;
                t=t-1;
                p++;
            }
            if(m<1 || a<3 || r<2 || g<1 || i<1 || t<1)
                break;
        }
        printf("%d\n",p);
    }
    return 0;
}
