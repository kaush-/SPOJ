#include<stdio.h>
#include<stdlib.h>
long long int value[1000001]={};


long long int val(int num)
{
	if(num<=1000000 && value[num]!=0)
		return (value[num]);
	
	else
	{
		int a,b,c;
		a=num/2;
		b=num/3;
		c=num/4;
		
		if(num>=(a+b+c))
			return num;

		long long int val1,val2,val3;
		
		val1=val(a);
		if(a<=1000000 && value[a]==0)
			value[a]=val1;

		val2=val(b);
		if(b<=1000000 && value[b]==0)
			value[b]=val2;
			
		val3=val(c);
		if(c<=1000000 && value[c]==0)
			value[c]=val3;
				
		if(num<=1000000 && value[num]==0)
			value[num]=val1+val2+val3;
								
		return (val1+val2+val3);
		
	}
}


int main(void)
{	
	int T=10;
	while(T>0)
	{
		int N;
		scanf(" %d",&N);
		
		printf("%lld\n",val(N));
		
		T--;
	}
	
	return 0;

}
