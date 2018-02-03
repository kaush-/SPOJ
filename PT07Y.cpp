#include<cstdio>
#include<cstdlib>
#include<stack>
#include<iostream>
#include<iomanip>

using namespace std;


int main(void)
{
    int N,M;
    int V[10001]={},E[20002][2];

    scanf("%d%d",&N,&M);

    if(M != N-1)
    {
        printf("NO\n");
        exit(0);
    }

    for(int i = 0; i< M; i++)
        scanf("%d%d",&E[i][0],&E[i][1]);

    stack<int> temp;
    temp.push(1);
    int colored = 0;

    while(!temp.empty())
    {
        int cver = temp.top();
        temp.pop();
        V[cver] = 1;
        colored++;
        for(int i =0; i< M; i++)
        {
            if(E[i][0]==cver)
            {
                if(V[E[i][1]] == 1)
                    break;
                else
                    temp.push(E[i][1]);
            }
        }

    }
    if(colored == N)
            printf("YES\n");
    else
            printf("NO\n");
}
