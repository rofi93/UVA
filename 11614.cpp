#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double sum,x;
    long long int n;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&sum);
        x=(8*sum)+1;
        n=(sqrt(x)-1)/2;
        printf("%lld\n",n);
    }
    return 0;
}
