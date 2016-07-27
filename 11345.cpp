#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,n,m,t,x1[30],x2[30],y1[30],y2[30],X1,X2,Y1,Y2,x,y;
    int area;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d %d %d %d",&x1[j],&y1[j],&x2[j],&y2[j]);
        }
        x=fabs(x2[0]-x1[0]);
        y=fabs(y2[0]-y1[0]);
        area=x*y;
        printf("%d\n",area);
    }
    return 0;
}
