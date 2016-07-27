#include<iostream>
#include<cstdio>
using namespace std;
class emoogle
{
public:
    int i,x,suppose,treat;
    emoogle(int n)
    {
        suppose=treat=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x==0)
                treat++;
            else
                suppose++;
        }
    }
    ~emoogle()
    {
        printf("%d\n",suppose-treat);
    }
};
int main()
{
    int n,c=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        emoogle e(n);
        printf("Case %d: ",c++);
    }
    return 0;
}
