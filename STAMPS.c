#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int T,Scount=0;
	scanf("%d",&T);
	
	while(T--)
	{
		Scount++;
		int stm,frds,val[1001],sval[1001],max=0,ar[10001]={},count=0,fcount=0,i;
		scanf(" %d%d",&stm,&frds);
		
		for(i=1;i<=frds;i++)
		{
			scanf("%d[^ ]",&val[i]);
			
			if(max<val[i])
				max=val[i];
			
			ar[val[i]]++;
		}

		int j=frds;
		for(i=0;i<=max;i++)
		{
			while(ar[i]>0)
			{
				sval[j]=i;
				j--;
				ar[i]--;
			}
		}

		for(i=1;i<=frds;i++)
		{
			count=count+sval[i];
			fcount++;
			if(count>=stm)
				break;
		}
		
		printf("Scenario #%d:\n",Scount);
		if(count>=stm)
			printf("%d\n\n",fcount);
		else
			printf("impossible\n\n");
	}
	return 0;
}
