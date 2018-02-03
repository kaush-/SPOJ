#include<cstdio>
#include<cstdlib>
#include<stack>
#include<iostream>
#include<iomanip>

using namespace std;


int main(void)
{
    int N;
    while(1)
    {
        scanf("%d",&N);
        if(N > 0)
        {
            float ans = (N*N)/(2*3.14159);
            int temp = int(ans);
            int digits = 0; while (temp != 0) { temp /= 10; digits++; }
            cout<<setprecision(digits+2);
            printf("%.2f\n",ans);

        }
        else
            break;
    }
    return 0;
}
