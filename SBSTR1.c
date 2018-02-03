#include<stdio.h>
#include<string.h>


int main(void)
{
	int T=24;
	
	while(T>0)
	{
		int i,j,flag=0;
		char a[11],b[6];
		
		scanf(" %s[^ ]",a);
		scanf(" %s",b);
		
		for(i=0;i<6;i++)
		{
			if(flag==1)
				break;
			
			flag=1;
			for(j=0;j<5;j++)
			{
				if(a[i+j]!=b[j])
				{
					flag=0;
					break;
				}
									
				
			}
		}
		
		printf("%d\n",flag);
		
		T--;
	}
	
	return 0;
}
