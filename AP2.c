#include<stdio.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		long long int x,y,z,a,d,n,i;
		
		scanf(" %lld%lld%lld",&x,&y,&z);
		
		n=(2*z)/(x+y);
		d=(y-x)/(n-5);
		a=x-2*d;
		printf("%lld\n",n);
		for(i=0;i<n;i++)
		{
			printf("%lld ",a+i*d);
		}
		printf("\n");
		T--;
	
	
	}
	
	return 0;

}
