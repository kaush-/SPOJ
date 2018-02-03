#include<stdio.h>
#include<math.h>
#define MAX 100000

int Prime[MAX+1]={};
int cal[9592]={};
int ar[MAX+1]={};

void calc()
{
	int i,j,k=0;
	
	for(i=2;i<=MAX;i++)
	{
		if(ar[i]==0)
		{
			Prime[i]=1;
			cal[k]=i;
			k++;
			for(j=i;j<=MAX;j=j+i)
				ar[j]=1;

		}
	}
}

int find(int num)
{
	int i;
	for(i=0;i<9592;i++)
		if(Prime[i]==num)
			return 1;
			
	return 0;
	
}

int isprime(long long int num,long long int rt,int loc )
{
	int i;
	
	for(i=0;i<loc+1;i++)
	{
		if(cal[i]>rt)
		break;
		
		if((num/cal[i])*cal[i]==num)
		return 0;
		
	}
	
	return 1;
}

int findl(long long int num,int a,int b)
{
	int mid=(a+b)/2;
	
	if(cal[mid]>num)
		findl(num,a,mid-1);
	else
		return b;
}

int main(void)
{
	calc();
	
	int T;
	
	scanf(" %d",&T);
	
	while(T>0)
	{
		long long int L,U;
		scanf(" %lld%lld",&L,&U);
		
		long long int i;
		
		for(i=L;i<=U;i++)
		{
			if(i<=MAX)
			{	
				if(Prime[i]==1)
					printf("%lld\n",i);
			}
					
			else
			{
				long long int rt= (long long int)floor(sqrt(i));
				
				int loc = findl(rt,0,9592);
				
				if(isprime(i,rt,loc)==1)
					printf("%lld\n",i);
			}
			
		}
		printf("\n");
		T--;
	}
	
	return 0;
}
