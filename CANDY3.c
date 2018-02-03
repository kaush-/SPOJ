#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int T;
	scanf(" %d",&T);
	
	while(T>0)
	{
		scanf("\n");
		
		int N,i;
		long long int count=0,num;
		
		scanf(" %d",&N);
		
		for(i=0;i<N;i++)
		{
			scanf(" %lld",&num);
			count=(count+num) % N;
		}
		
		if(count==0)
			printf("YES\n");
		else
			printf("NO\n");
			
		T--;
	}
	return 0;

}
