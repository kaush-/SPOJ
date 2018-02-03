#include<stdio.h>

int main(void)
{
	int T;
	
	scanf(" %d",&T);
	while(T>0)
	{
		int N,i=0,count=1;
		
		scanf(" %d",&N);
		
		while(i<N)
		{
			i=i+count;
			count++;
			
		}
		
		int x,y;
		
		int pre=i-count+1;
		pre++;		
		if(count%2==0)
		{
			x=count-1;
			y=1;
			while(pre<N)
			{
				x--;
				y++;
				pre++;
			}
		}
		else
		{
			y=count-1;
			x=1;
			while(pre<N)
			{
				y--;
				x++;
				pre++;
			}			
		}		
		
		printf("TERM %d IS %d/%d\n",N,x,y);
		T--;
	}
	return 0;
}
