#include<cstdio>
using namespace std;
int main()
{
    int n,m,count,count_match,i,j,x;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            count_match=0;
            for(j=1;j<=m;j++)
            {
                scanf("%d",&x);
                if(x>0)
                    count_match++;
            }
            if(count_match==m)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
