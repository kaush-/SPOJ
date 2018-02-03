#include<stdio.h>

int main(void)
{
	while(1)
	{
		float f;
	
		scanf(" %f",&f);
		
		if(f==0)
			return 0;
		
		int count=0,i=2;
		float val=0;
		
		while(val<f)
		{
			val=val + (1/(float)i);
			count++;
			i++;
		}
		
		printf("%d card(s)\n",count);
	}
	return 0;
}
