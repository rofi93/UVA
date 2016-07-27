#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int x[100000],n,g,s,r,i,count,point,dif,j;
    while(scanf("%d %d",&n,&g)!=EOF)
    {
        point=count=j=0;
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&s,&r);
            dif=s-r;
            if(dif>0)
                point+=3;
            else
                x[j++]=dif;
        }
        sort(x,x+j);
        for(i=j-1; i>=0; i--)
        {
            dif=1-x[i];
            if(dif>1)
            {
                if(dif+count<=g)
                {
                    count+=dif;
                    point+=3;
                }
                else if(dif+count-1<=g)
                {
                    count+=dif-1;
                    point++;
                }
            }
            else if(dif==1)
            {
                if(dif+count<=g)
                {
                    point+=3;
                    count++;
                }
                else
                    point++;
            }
        }
        printf("%d\n",point);
    }
    return 0;
}
