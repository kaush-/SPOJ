#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	while(1)
	{
		int N,Val[100001],inval[100001],flag=0,i;
		scanf("%d",&N);
		
		if(N==0)
			return 0;
			
		for(i=1;i<=N;i++)
		{
			scanf(" %d[^ ]",&Val[i]);
			inval[Val[i]]=i;
		}
		
		for(i=1;i<=N;i++)
		{
			if(Val[i]!=inval[i])
			{
				flag=1;
				break;
			}
		}
		
		
			
		
		if(flag==1)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
			
	}
	return 0;
}
