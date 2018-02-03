#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
		int NG,NM,i,Max_G=0,Max_M=0;
		scanf(" %d%d",&NG,&NM);
		
		int G[100001],M[100001];
		
		for(i=0;i<NG;i++)
		{
			scanf(" %d[^ ]",&G[i]);
			if(Max_G<G[i])
				Max_G=G[i];
		}
	
		for(i=0;i<NM;i++)
		{
			scanf(" %d[^ ]",&M[i]);
			if(Max_M<M[i])
				Max_M=M[i];
		}
		
		if(Max_M>Max_G)
			printf("MechaGodzilla\n");
		
		else
			printf("Godzilla\n");
		
	}
	return 0;
}
