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
        int A,D;
        scanf("%d%d",&A,&D);
        if(A==0 && D == 0)
            exit(0);

        int mina = MAX, mind= MAX, mind2 = MAX,temp;

        for(int i =0; i< A;i++)
        {
            scanf("%d[^ ]",&temp);
            if(temp<mina)
                mina = temp;
        }

        for(int i =0; i< D;i++)
        {
            scanf("%d[^ ]",&temp);
            if(temp<mind)
            {
                mind2 = mind;
                mind = temp;
            }
            else if(temp<mind2)
                mind2 = temp;

        }

        if(mina < mind2)
            printf("Y\n");
        else
            printf("N\n");


    }
}
