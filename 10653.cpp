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

#define pii pair<int,int>

using namespace std;

long int cell[1001][1001],visited[1001][1001],dist[1001][1001];
int fx[]={1,-1,0,0};  /* direction array */
int fy[]={0,0,1,-1};

int main()
{
    queue<pii>q;
    pii top;
    long int i,j,k,row,col,m,n,r,c,tx,ty,srcx,srcy,dstx,dsty;  /* source position= srcx,srcy and destination position = dstx,dsty*/
    while(scanf("%ld %ld",&row,&col))
    {
        if(row==0 && col==0)
            break;
        /*for(i=0;i<1001;i++)
        {
            for(j=0;j<1001;j++)
            {
                cell[i][j]=visited[i][j]=dist[i][j]=0;
            }
        }*/
        memset(cell,0,sizeof(cell));
        memset(dist,0,sizeof(dist));
        memset(visited,0,sizeof(visited));
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld %ld",&r,&m);
            for(j=0;j<m;j++)
            {
                scanf("%ld",&c);
                cell[r][c]=-1;
            }
        }
        scanf("%ld %ld %ld %ld",&srcx,&srcy,&dstx,&dsty);
        q.push(pii(srcx,srcy));
        visited[srcx][srcy]=1;
        dist[srcx][srcy]=0;
        while(!q.empty())
        {
            top=q.front();
            q.pop();
            for(k=0;k<4;k++)
            {
                tx=top.first+fx[k];
                ty=top.second+fy[k];
                if(tx>=0 && tx<row && ty>=0 && ty<col && cell[tx][ty]!=-1 && visited[tx][ty]==0)
                {
                    visited[tx][ty]=1;
                    dist[tx][ty]=dist[top.first][top.second]+1;
                    q.push(pii(tx,ty));
                    if(visited[dstx][dsty])
                    {
                        while(!q.empty())
                        {
                            q.pop();
                        }
                        break;
                    }
                }
            }
        }
        printf("%ld\n",dist[dstx][dsty]);
    }
    return 0;
}
