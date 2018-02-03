#include<stdio.h>
#include<stdlib.h>
int PE[501],PF[501],tcost,B,TP;
int min(int a,int b)
{
	if(a==0)
		return b;
	
	if(a<b)
		return a;
	else
		return b;
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int knap(B,TP)
{
	if(B==0 || TP==0)
		return 0;
		
		
	if(PE[TP-1]>B)
		return(knap(B,TP-1));
	
	else
	{
		int a,b,c;
		a=knap(B-PE[TP-1],TP-1)+PF[TP-1];
		b=knap(B,TP-1);
		c=max(a,b);
		return c;
	}
}

void check(int cost,int fun,int ans,int TP)
{
	if(fun==ans)
	{
		if(cost<tcost)
			tcost=cost;
	}
	
	else if(fun>ans || TP==0 || cost>B)
		return;
	

	else
	{
		check(cost+PE[TP-1],fun+PF[TP-1],ans,TP-1);
		check(cost,fun,ans,TP-1);
	}
}

int main(void)
{
	while(1)
	{
		int i;
		
		scanf(" %d%d",&B,&TP);
		if(B==0 && TP==0)
			return 0;
		
		for(i=0;i<TP;i++)
			scanf(" %d%d",&PE[i],&PF[i]);
		int ans=knap(B,TP);
		tcost=50000;
		check(0,0,ans,TP);
		printf("%d %d\n",tcost,ans);
	}
	return 0;
}
