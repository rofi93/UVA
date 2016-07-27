#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char m[10001],b;
char a[101];
int main()
{
    int t,c,i,k,j,n,l,x[200],y[200];
    double sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        for(i=0;i<k;i++)
        {
            getchar();
            scanf("%c",&a[i]);
            scanf("%d",&x[i]);
        }
        scanf("%d",&n);
        getchar();
        sum=0;
        for(i=0;i<n;i++)
        {
            gets(m);
            for(j=0;j<strlen(m);j++)
            {
                for(l=0;l<k;l++)
                {
                    if(m[j]==a[l])
                    {
                        sum+=x[l];
                        break;
                    }
                }
            }
        }
        printf("%.2lf$\n",sum/100.0);
    }
    return 0;
}
