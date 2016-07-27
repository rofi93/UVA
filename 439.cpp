#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int fx[]={-1,1,2,-2,2,-2,1,-1};
int fy[]={-2,-2,-1,-1,1,1,2,2};
int main()
{
    string src,dest;
    int i,j,moves[10][10],visited[10][10],srcx,srcy,destx,desty,x,y,nx,ny;
    queue<pii>Q;
    pii top;
    while(cin>>src>>dest)
    {
        srcx=src[0]-96;
        srcy=src[1]-48;
        destx=dest[0]-96;
        desty=dest[1]-48;
        memset(visited,0,sizeof(visited));
        memset(moves,-1,sizeof(moves));
        if(src==dest)
        {
            cout<<"To get from "<<src<<" to "<<dest<<" takes 0 knight moves.\n";
            continue;
        }
        visited[srcx][srcy]=1;
        moves[srcx][srcy]=0;
        Q.push(pii(srcx,srcy));
        while(!Q.empty())
        {
            top=Q.front();
            Q.pop();
            x=top.first;
            y=top.second;
            for(i=0;i<8;i++)
            {
                nx=x+fx[i];
                ny=y+fy[i];
                if(nx>0 && ny>0 && nx<9 && ny<9 && visited[nx][ny]==0)
                {
                    visited[nx][ny]=1;
                    moves[nx][ny]=moves[x][y]+1;
                    if(nx==destx && ny==desty && !Q.empty())
                    {
                        while(!Q.empty())
                        {
                            Q.pop();
                        }
                        break;
                    }
                    Q.push(pii(nx,ny));
                }
            }
        }
        cout<<"To get from "<<src<<" to "<<dest<<" takes "<<moves[destx][desty]<<" knight moves.\n";
    }
    return 0;
}
