#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double a,b;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        printf("%.0lf\n",fabs(a-b));
    }
    return 0;
}
