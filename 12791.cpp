#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int x,y,i,count;
    while(cin>>x>>y)
    {
        count=0;
        for(i=1;;i++)
        {
           // cout<<i<<" ";
            if(count>=x)
                break;
            count+=y-x;
        }
        //if(y%x==0 && x>1)
            //i--;
        cout<<i<<endl;
    }
    return 0;
}
