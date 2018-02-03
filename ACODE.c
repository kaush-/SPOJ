#include<stdio.h>
#include<string.h>
long long int val[5001]={};

long long int Cal(char *str,int num)
{
	if(val[num]!=0)
		return val[num];

	long long int temp;
	
	if(((str[num-2]-'0')*10 + (str[num-1]-'0'))%10==0)
		temp=Cal(str,num-2);
		
	else if(str[num-2]-'0'<3 && str[num-2]!='0' && ((str[num-2]-'0')*10 + (str[num-1]-'0'))<27)
		temp=Cal(str,num-1) + Cal(str,num-2);
	else
		temp=Cal(str,num-1);
	
	val[num]=temp;
	
	return temp;
	
}

int main(void)
{
	while(1)
	{
		char str[5001];
		long long int count=0;
		int i;
		
		scanf(" %s",str);
		
		if(strlen(str)==1 && str[0]=='0')
			return 0;
		for(i=0;i<=5000;i++)
			val[i]=0;
		
		val[0]=1;
		val[1]=1;
		
		count=Cal(str,strlen(str));
		
		printf("%lld\n",count);
	}
	return 0;
}
