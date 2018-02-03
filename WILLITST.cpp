#include<cstdio>
#include<cstdlib>
#include<stack>
#include<iostream>
#include<iomanip>

using namespace std;


int main(void)
{
    long long int N;
    int flag=0;
    scanf("%lld",&N);
    while(1)
    {
        if(N==1)
        {
            flag=1;
            break;
        }
        else
        {
            if((N - ((N/2)*2)) == 0)
                N = N/2;
            else
                break;
        }
    }
    if(flag == 0)
        printf("NIE\n");
    else
        printf("TAK\n");

    return 0;
}
