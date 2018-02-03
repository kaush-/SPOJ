#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	while(1)
	{
		int N,val[1001]={},min=1000,max=0,num,i;
		
		scanf(" %d",&N);
		if(N==-1)
			break;
			
		for(i=0;i<N;i++)
		{
			scanf(" %d",&num);
			
			val[num]++;
			if(num>max)
				max=num;
			if(num<min)
				min=num;
		}
		
		int count=0;
		
		while((max-min)>1)
		{
			val[max]--;
			val[max-1]++;
			
			val[min]--;
			val[min+1]++;
			
			if(val[max]==0)
				max=max-1;
			if(val[min]==0)
				min=min+1;
				
			count++;
			
		}
		
		if(max>min)
			printf("-1\n");
		else
			printf("%d\n",count);
	}
	
	return 0;
}
