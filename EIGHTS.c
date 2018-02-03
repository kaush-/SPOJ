#include<stdio.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		long long int N;
		scanf(" %lld",&N);
		
		printf("%lld\n",192+250*(N-1));
		T--;
	}
	
	return 0;

}
