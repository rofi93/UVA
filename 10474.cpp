#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,q,x[10000],i,j,c=1,k,a;
    while(scanf("%d %d",&n,&q))
    {
        if(n==0 && q==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        sort(x,x+n);
        for(i=0;i<q;i++)
        {
            scanf("%d",&a);
            if(i==0)
                printf("CASE# %d:\n",c++);
            for(j=0;j<n;j++)
            {
                if(a==x[j])
                    break;
            }
            if(j==n)
                printf("%d not found",a);
            else
                printf("%d found at %d",a,j+1);

            printf("\n");
        }
    }
    return 0;
}
