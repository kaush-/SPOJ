#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void pal(char *val,int dig)
{
	int i;
	for(i=0;i<dig;i++)
		if(val[i]!='9')
			break;
	
		
	if(i==dig)
	{
		val[0]='1';
		for(i=1;i<dig;i++)
			val[i]='0';
		val[dig]='1';
			
		val[dig+1]='\0';
		return;
	}
	
	int flag=0;
	for(i=0;i<dig/2;i++)
	{
		if(val[i]<val[dig-i-1])
			flag=-1;
		
		else if(val[i]>val[dig-i-1])
			flag=1;
		
		val[dig-i-1]=val[i];
	}
	
	if(flag==0||flag==-1)
	{
		int tmp,t=0;
		
		if(dig%2==0)
			tmp=dig/2-1;
		else
			tmp=dig/2;
			
		while(val[tmp-t]=='9')
		{
			val[dig-1-tmp+t]='0';
			val[tmp-t]='0';
			
			t++;
		}
		val[tmp-t]++;
		val[dig-1-tmp+t]=val[tmp-t];
	}
}

int main(void)
{
	int T;
	
	scanf(" %d",&T);
	
	while(T>0)
	{
		char val[1000001];
		int dig=0,i;
		
		scanf(" %s",val);
		
		for(i=0;val[i]!='\0';i++)
			dig++;
		
		pal(val,dig);

		printf("%s\n",val);
		
		T--;
			
		
		
	}
	return 0;
}
