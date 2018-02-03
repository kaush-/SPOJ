#include<cstdio>
#include<cstdlib>
#include<stack>
#include<iostream>
#include<iomanip>
#define MAX 100000

using namespace std;


int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char str1[100];
        scanf("%s[^ ]",str1);
        long long int fopr,sopr;
        fopr= (long long)(atoi(str1));
        while(1)
        {
            char str[100],opr;
            scanf("%s[^ ]",str);
            if(str[0]== '=')
                break;

            if((str[0]!='+') && (str[0]!='-') && (str[0]!='*') && (str[0]!='/'))
            {
                sopr=(long long)(atoi(str));
                switch(opr)
                {
                    case '+':fopr+=sopr;break;
                    case '-':fopr-=sopr;break;
                    case '*':fopr*=sopr;break;
                    case '/':fopr/=sopr;break;
                }
            }
            else
            {
                opr = str[0];

            }


        }
        printf("%lld\n",fopr);
    }
}
