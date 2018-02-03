#include<stdio.h>
#include<math.h>
#define MAX 1000000000

int isprime(int num)
{
	long long int k=5;
	long long int root= (long long int) floor(sqrt(num));
	
	while(k<=root)
	{
		if((num/k)*k==num)
			return 0;
			
		k=k+2;
		
		if((num/k)*k==num)
			return 0;
		
		k=k+1;
		
	}

	return 1;
}





int main(void)
{
	FILE *f;
	long long int k,count;
	
	f=fopen("Primes.txt","w");
	
			fprintf(f,"2,");
		
			fprintf(f,"3,");
			
			k=5;
			count=2;
		
		while(k<=MAX)
		{
			if(isprime(k)==1)
			{
				fprintf(f,"%lld,",k);
				count++;
			}
			
			k=k+2;
					
			if(k>MAX)
				break;
			
			if(isprime(k)==1)
			{
				fprintf(f,"%lld,",k);
				count++;
			}
			
			k=k+4;
		}
	fprintf(f,"\n%lld",count);
	fclose(f);
	return 0;
}
