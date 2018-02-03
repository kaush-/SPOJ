#include<stdio.h>
#include<stdlib.h>
#define MAXE 101
#define MAXW 505
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}


int cost, fun, dp[MAXE][MAXW];

int main(void)
{
	int v, n, w, i, best;
	
	while(scanf("%d%d", &v, &n)==2) 
	{
		if(!v && !n) 
			break;

		for(i = 1; i <= n; i++) 
		{
			scanf("%d%d", &cost, &fun);
			for(w = 1; w <= v; w++) 
			{
				if(cost > w) 
					dp[i][w] = dp[i-1][w];
				else 
					dp[i][w] = max(dp[i-1][w], dp[i-1][w-cost] + fun);
			}
		}

		for(w = v, best = dp[n][v]; w; w--)
			if(dp[n][w] < best)
				break;

		printf("%d %d\n", w + 1, dp[n][v]);
	}
	return 0;
}
