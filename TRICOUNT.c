#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int T;
	scanf("%d\n",&T);
	
	while(T--)
	{
		long long int N;
		scanf("%lld",&N);
		printf("%lld\n",N*(N+2)*(2*N+1)/8);
	}
	return 0;
}
