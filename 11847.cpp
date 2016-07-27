#include<cstdio>
using namespace std;
int main()
{
    int n,i,x;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        x=0;
        for(i=1;;i++)
        {
            x=1<<i;
            if(x>n)
                break;
        }
        printf("%d\n",i-1);
    }
    return 0;
}
