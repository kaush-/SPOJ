#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	while(1)
	{
		int col,len,i,j;
		char str[200];
		
		scanf(" %d",&col);
		
		if(col==0)
			break;
			
		scanf(" %s",str);
		
		len=strlen(str);
		
		int row=len/col;
		
		char **new;
		
		new=(char **)malloc(sizeof(char *)*row);
		
		for(i=0;i<row;i++)
		{
			new[i]=(char *)malloc(sizeof(char)*col);
		}
		
		int rp=0,cp=0;
		
		for(i=0;i<len;i++)
		{
			new[rp][cp]=str[i];
			
			if(rp%2==0)
			{
				if(cp==col-1)
				{
					rp++;
				}
				else
				{
					cp++;
				}
			}
			else
			{
				if(cp==0)
				{
					rp++;
				}
				else
				{
					cp--;
				}
			}
		}
		
		for(i=0;i<col;i++)
		{
			for(j=0;j<row;j++)
			printf("%c",new[j][i]);
			
		}
		printf("\n");
	}
	
	return 0;
}
