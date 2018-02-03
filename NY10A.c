#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int T;
	scanf(" %d",&T);
	while(T--)
	{
		int C,TTT=0,TTH=0,THT=0,THH=0,HTT=0,HTH=0,HHT=0,HHH=0,i;
		scanf(" %d",&C);
		
		char str[41];
		scanf(" %s",str);
		
		for(i=0;i<strlen(str)-2;i++)
		{
			if(str[i]=='T' && str[i+1]=='T' && str[i+2]=='T')
				TTT++;

			else if(str[i]=='T' && str[i+1]=='T' && str[i+2]=='H')
				TTH++;

			else if(str[i]=='T' && str[i+1]=='H' && str[i+2]=='T')
				THT++;

			else if(str[i]=='T' && str[i+1]=='H' && str[i+2]=='H')
				THH++;

			else if(str[i]=='H' && str[i+1]=='T' && str[i+2]=='T')
				HTT++;
				
			else if(str[i]=='H' && str[i+1]=='T' && str[i+2]=='H')
				HTH++;

			else if(str[i]=='H' && str[i+1]=='H' && str[i+2]=='T')
				HHT++;

			else if(str[i]=='H' && str[i+1]=='H' && str[i+2]=='H')
				HHH++;
		}
		printf("%d %d %d %d %d %d %d %d %d\n",C,TTT,TTH,THT,THH,HTT,HTH,HHT,HHH);
	}
	return 0;
}
