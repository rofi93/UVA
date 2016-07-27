#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<list>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    char str[10][10],path[]="@IEHOVA#";
    int i,j,k,direction[10],m,n,t,count,prev_row,prev_col,pre_row,pre_col;
    scanf("%d",&t);
    while(t--)
    {
        memset(direction,0,10);
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
        {
            scanf("%s",str[i]);
        }
        count=prev_row=prev_col=pre_row=pre_col=0;
        for(i=m-1;i>=0;i--)
        {
            for(j=0;j<n;j++)
            {
                if(path[count]==str[i][j])
                {
                    if(count==0)
                    {
                        pre_row=i;
                        pre_col=j;
                    }
                    else
                    {
                        prev_col=pre_col;
                        prev_row=pre_row;
                        pre_row=i;
                        pre_col=j;
                        if(prev_row==pre_row)
                        {
                            if(prev_col<pre_col)
                            {
                                direction[count]=3;
                            }
                            else
                            {
                                direction[count]=1;
                            }
                        }
                        else
                        {
                            direction[count]=2;
                        }
                    }
                    count++;
                    j=-1;
                }
            }
        }
        for(i=1;i<=7;i++)
        {
            if(direction[i]==1)
                printf("left");
            else if(direction[i]==2)
                printf("forth");
            else
                printf("right");
            if(i<7)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
