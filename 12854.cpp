#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int x[5],y[5],i;
    bool res;
    while(scanf("%d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4])!=EOF)
    {
        scanf("%d %d %d %d %d",&y[0],&y[1],&y[2],&y[3],&y[4]);
        res=false;
        for(i=0;i<5;i++)
        {
            if(x[i]==y[i])
            {
                res=true;
                break;
            }
        }
        if(res)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
