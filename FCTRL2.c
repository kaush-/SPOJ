#include<stdio.h>

int fac(int num,int *fact)
{
	int dig=1,carry,i,j;
	fact[0]=1;
	
	for(i=2;i<=num;i++)
	{
		carry=0;
		for(j=0;j<dig;j++)
		{
			fact[j]=fact[j]*i + carry;
			
			carry=fact[j]/10;
			
			fact[j]=fact[j]%10;
			
			if(carry>0 && j==dig-1)
				dig++;
		}
	}
	
	return dig;
}


int main(void)
{
	int T,i;
	scanf(" %d",&T);
	
	while(T>0)
	{
		int num,fact[200]={},dig=0;
		
		scanf(" %d",&num);
		
		dig=fac(num,fact);
		
		for(i=dig-1;i>=0;i--)
			printf("%d",fact[i]);
		
		printf("\n");
		
		T--;
		
	}
	
	return 0;
}
