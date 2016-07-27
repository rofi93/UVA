#include<iostream>
#include<queue>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int> > pq;
    int i,x,count,n,y,cost;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            cin>>y;
            pq.push(y);
        }
        x=count=cost=0;
        while(!pq.empty())
        {
            x+=pq.top();
            pq.pop();
            count++;
            if(count==2)
            {
                pq.push(x);
                cost+=x;
                count=x=0;
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}
