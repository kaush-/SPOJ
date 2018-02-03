#include<stdio.h>
#include<stdlib.h>
int map[102][102]={},val[102][102]={},M,N;

int max(int a,int b,int c)
{
	if(a>=b)
	{
		if(a>c)
			return a;
		else
			return c;
	}
	else
	{
		if(b>c)
			return b;
		else
			return c;	
	}
}

int cal(int r,int c)
{
	if(map[r][c]!=-1)
		return map[r][c];
	
	if(r==M)
		map[r][c]=val[r][c];
	else
	{
		if(c<N)
			map[r][c]=max(cal(r+1,c-1),cal(r+1,c),cal(r+1,c+1)) + val[r][c];
		
		else
			map[r][c]=max(cal(r+1,c-1),cal(r+1,c),0) + val[r][c];
	}
		
	
	return map[r][c];
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int temp,i,j;
		scanf(" %d%d",&M,&N);
		
		for(i=1;i<=M;i++)
		{
			for(j=1;j<=N;j++)
			{
				map[i][j]=-1;
				scanf(" %d[^ ]",&val[i][j]);
			}
		}
		
		int max=0;
		
		for(i=1;i<=N;i++)
		{
			temp=cal(1,i);
			if(temp>max)
				max=temp;
		}
		
		printf("%d\n",max);
	}
	return 0;
}
