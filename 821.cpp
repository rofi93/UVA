#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int matrix[101][101],i,j,k,a,b,max,tc=1;
    double avg,total;
    while(scanf("%d %d",&a,&b))
    {
        if(a==0 && b==0)
            break;
        for(i=0;i<101;i++)
        {
            for(j=0;j<101;j++)
            {
                matrix[i][j]=100000;
                if(i==j)
                    matrix[i][j]=0;
            }
        }
        max=0;
        matrix[a][b]=1;
        if(a>max)
            max=a;
        if(b>max)
            max=b;
        while(scanf("%d %d",&a,&b))
        {
            if(a==0 && b==0)
                break;
            matrix[a][b]=1;
            if(a>max)
                max=a;
            if(b>max)
                max=b;

        }

        for(k=1;k<=max;k++)
        {
            for(i=1;i<=max;i++)
            {
                for(j=1;j<=max;j++)
                {
                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
                }
            }
        }
        avg=total=0;
        for(i=1;i<=max;i++)
        {
            for(j=1;j<=max;j++)
            {
                if(matrix[i][j]<100000 && i!=j)
                {
                    total+=matrix[i][j];
                    avg++;
                }
            }
        }
        printf("Case %ld: average length between pages = %.3lf clicks\n",tc++,total/avg);
    }
    return 0;
}
