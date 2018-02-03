#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int checkpal(char *val,int dig)
{
	int mid=dig/2;
	int i;
	for(i=0;i<mid;i++)
	{
		if(val[i]!=val[dig-i-1])
			return 0;
			
	}
	return 1;
}

int add(char *val,int dig)
{
	int carry=1;
	int i=0;
	int num;
	
	while(carry!=0)
	{
		num=val[i]-'0';
		
		num=num+carry;
		
		if(num==10)
		{
			val[i]='0';
			carry=1;
			
			if(i==(dig-1))
			{
				val[i+1]='1';
				carry=0;
				dig++;
			}
			
			
		}
		else
		{
			val[i]=num+48;
			carry=0;
		}
		i++;
	}
	
	return dig;
	
}

int main(void)
{
	int T;
	
	scanf(" %d",&T);
	
	while(T>0)
	{
		char str[1000001],val[1000001];
		int dig=0,i;
		
		scanf(" %s",str);
		
		for(i=0;str[i]!='\0';i++)
			dig++;
		
		for(i=0;i<dig;i++)
			val[dig-i-1]=str[i];
			
		i=add(val,dig);
		dig=i;

		while(checkpal(val,dig)==0)
		{
			i=add(val,dig);
			dig=i;
		}
		
		for(i=dig-1;i>=0;i--)
			printf("%c",val[i]);
					
		printf("\n");
		
		T--;
			
		
		
	}
	return 0;
}
