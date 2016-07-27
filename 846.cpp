
#include<iostream>
using namespace std;
int main ()
{
    int x , y;
    int testCases;
    int min_steps = 0;
    cin>>testCases;

    for(int i=0; i<testCases ; i++)
    {
        cin>>x>>y;
        int difference = y - x;
        min_steps = 0;

        if(difference != 0)
        {
            int sumOfSteps = 0;
            int z = 2;

            while(difference > sumOfSteps)
            {
                sumOfSteps += (z / 2);
                min_steps++;
                z++;
            }
        }

        cout<<min_steps<<endl;
    }
    return 0;
}
