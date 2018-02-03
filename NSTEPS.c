#include<stdio.h>

int main(void)
{
	int T;
	
	scanf("%d",&T);
	
	while(T>0)
	{
		int x,y;
		
		scanf(" %d%d",&x,&y);
		
		if((x-y)!=2 && (x-y)!=0)
		{
			printf("No Number\n");
		}
		
		else
		{
			int lx=0,ly=0;
			int count=0;
			
			while(((lx!=x) || (ly!=y)))
			{
				if(lx==ly)
				{
					if(lx%2==0)
					{
						lx++;
						ly++;
					}
					else
					{
						lx++;
						ly--;
					}
				}
				else
				{
					if(lx%2==0)
					{
						lx++;
						ly++;
					}
					else
					{
						lx--;
						ly++;
					}
				}
				
				count++;
			}
			
			printf("%d\n",count);
		
		}
		T--;
	}
	
	return 0;
}
