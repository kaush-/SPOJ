#include<stdio.h>

int main(void)
{
	while(2)
	{
		int N,i,count=0;
		
		scanf(" %d",&N);
		
		if(N==0)
			break;
		
		for(i=1;i<=N;i++)
		{
			count=count+i*i;
		}
		
		printf("%d\n",count);
	}
	
	return 0;
}
