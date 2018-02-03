#include<cstdio>
#include<cstdlib>
#include<stack>
#include<iostream>
#include<iomanip>
#define MAX 100000

using namespace std;


int main(void)
{
    while(1)
    {
        int B,G;
        scanf("%d%d",&B,&G);

        if(B == -1 && G == -1)
            exit(0);

        if(B==0)
        {
            printf("%d\n",G);
            continue;
        }
        if(G==0)
        {
            printf("%d\n",B);
            continue;
        }
        if(B==G)
        {
            printf("1\n");
            continue;
        }

        int minv =B,maxv=G;

        if(G<B)
        {
            minv=G;
            maxv=B;
        }

        printf("%d\n",(B+G)/(minv+1));

    }
}
