#include<stdio.h>
#include<string.h>
int main()
{
    char x[101][101];
    int n,m,i,j,s,c=1;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==0 && m==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%s",x[i]);
        }
        if(c>1)
        {
            printf("\n");
        }
        printf("Field #%d:\n",c++);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                s=0;
                if(x[i][j]=='*')
                {
                    printf("*");
                }
                else if(x[i][j]=='.')
                {
                    if(x[i-1][j]=='*' && i>0)
                        s++;
                    if(x[i-1][j-1]=='*' && i>0)
                        s++;
                    if(x[i-1][j+1]=='*' && i>0)
                        s++;
                    if(x[i][j-1]=='*')
                        s++;
                    if(x[i][j+1]=='*')
                        s++;
                    if(x[i+1][j]=='*' && i<n-1)
                        s++;
                    if(x[i+1][j-1]=='*' && i<n-1)
                        s++;
                    if(x[i+1][j+1]=='*' && i<n-1)
                        s++;
                    printf("%d",s);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
