#include<cstdio>
#include<cstdlib>
#include<stack>
#include<iostream>

using namespace std;


int main(void)
{
    int N;
    while(1)
    {
        scanf("%d",&N);
        if(N > 0)
        {


            int temp[1001];
            stack<int> tstack;

            for(int i = 0;i<N;i++)
                scanf("%d[^ ]",&temp[i]);

            int base = 1;
            int j=0;
            while(1)
            {
                if(j >= N)
                {
                    if(!tstack.empty())
                    {
                       while(!tstack.empty() && tstack.top() == base)
                        {
                            tstack.pop();
                            base++;
                        }
                    }

                    break;
                }

                if(temp[j] == base)
                {
                    j++;
                    base++;
                }
                else if(temp[j] > base)
                {
                    while(!tstack.empty() && tstack.top() == base)
                    {
                        tstack.pop();
                        base++;
                    }
                    tstack.push(temp[j]);
                    j++;
                }
                else
                    break;
            }

            if(j==N && tstack.empty())
                printf("yes\n");
            else
                    printf("no\n");
        }
        else
            break;
    }
    return 0;
}
