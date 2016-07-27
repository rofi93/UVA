#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int a[10],n,i,j,add,x,y,z=0,k;
    char str[10][13], name[13];
    while(scanf("%d",&n)!=EOF)
    {
        if(z++)
            printf("\n");
        for(i=0;i<10;i++)
            a[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%s %d %d",name,&x,&y);
            for(j=0;j<n;j++)
            {
                if(strcmp(name,str[j])==0)
                    break;
            }
            a[j]-=x;
            if(y!=0)
                add=x/y;
            a[j]+=x-(add*y);
            for(j=0;j<y;j++)
            {
                scanf("%s",name);
                for(k=0;k<n;k++)
                {
                    if(strcmp(name,str[k])==0)
                        break;
                }
                a[k]+=add;
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%s %d\n",str[i],a[i]);
        }
    }
    return 0;
}
