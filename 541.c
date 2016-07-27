#include<stdio.h>
int main()
{
    long long int matrix[100][100],row,col,r,c,n,i,j,sum;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        row=col=0;
        for(i=0; i<n; i++)
        {
            sum=0;
            for(j=0; j<n; j++)
            {
                scanf("%lld",&matrix[i][j]);
                sum+=matrix[i][j];
            }
            if(sum%2!=0)
            {
                if(row==0)
                {
                    for(j=0; j<n; j++)
                    {
                        if(matrix[i][j]==1)
                        {
                            r=i+1;
                            break;
                        }
                    }
                }
                row++;
            }
        }
        for(i=0; i<n; i++)
        {
            sum=0;
            for(j=0; j<n; j++)
            {
                sum+=matrix[j][i];
            }
            if(sum%2!=0)
            {
                if(col==0)
                {
                    for(j=0; j<n; j++)
                    {
                        if(matrix[j][i]==1)
                        {
                            c=i+1;
                            break;
                        }
                    }
                }
                col++;
            }
        }
        if(row==0 && col==0)
        {
            printf("OK\n");
        }
        else if(row==1 && col==1)
        {
            printf("Change bit (%lld,%lld)\n",r,c);
        }
        else
            printf("Corrupt\n");
    }
    return 0;
}
