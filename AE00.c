#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int N,count=0,i,num;
	scanf(" %d",&N);
		
	for(i=1;i*i<=N;i++)
	{
		num=i*i;
				
		while(num<=N)
		{
			count++;
			num=num+i;
		}
	}
		
	printf("%d\n",count);
	return 0;
}

