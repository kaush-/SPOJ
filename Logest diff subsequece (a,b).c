#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int N,min=300,max=0,i,count=0,tcount=0,maxcount=0;
	char *str;
	
	scanf("%d",&N);
	
	str=(char *)malloc(sizeof(char)*(N+1));
	
	scanf(" %s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>max)
			max=str[i];
		
		if(str[i]<min)
			min=str[i];
			
		
	}
	
	for(i=0;i<N;i++)
	{
		if(str[i]==(char)min)
			count++;
		
		if(str[i]==(char)max)
		{	
			count--;
			maxcount++;
		}
			
			
		if(count<=0)
		{
			count=0;
			maxcount=0;
		}
			
		if(count>tcount && maxcount>0)
			tcount=count;
	}
	
//	printf("Min=%c and MAX=%c\n",(char)min,(char)max);
	
	printf("%d\n",tcount);
	
	return 0;
}
