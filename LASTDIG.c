#include<stdio.h>
#include<math.h>

int main(void)
{
	int N;
	
	scanf(" %d",&N);
	while(N>0)
	{
		int a,b,mod,power;
		
		scanf(" %d%d",&a,&b);
		
		if(a==0)
		{
			printf("0\n");
		}
		else if(b==0)
		{
			printf("1\n");
		}
		else
		{
		
			a=a%10;
				
			switch(a)
			{
				case 1:case 0:case 5:case 6:mod=1;break;
				case 4:case 9:mod=2;break;
				case 2:case 3:case 7:case 8:mod=4;break;
				default:break;
			}
		
			if(mod==1)
			{
				printf("%d\n",a);
			}
			else
			{
				b=b % mod;
				if(b==0)
					power=mod;
				else
					power=b;
			
				printf("%d\n",((int)pow(a,power))%10);
			}
		}
		N--;
	}
	return 0;
}
