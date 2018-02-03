#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int T=10;
		
	while(T>0)
	{
		int N[1000]={},kl[1000]={},res[1000]={},temp[1000]={};
		
		int i=0,j=0,lenkl=0,borrow=0,resdig=0,div=0,tempdig=0,adddig=0,carry=0,dig=0;
		
		char str1[1000],str[1000];
		
		scanf(" %s",str);
	
		dig=strlen(str);
	
		for(i=dig-1;i>=0;i--)
			N[dig-1-i]=str[i]-'0';
			
		int t=N[0];
		
		scanf(" %s",str1);
		
		lenkl=strlen(str1);
		
		for(i=lenkl-1;i>=0;i--)
			kl[lenkl-1-i]=str1[i]-'0';
		
		int gt=0;
		
		if(lenkl>dig)
		{
			gt=1;
		}
		else if(lenkl==dig)
		{
			for(i=0;i<dig;i++)
			{
				if(kl[i]>N[i])
					gt=1;
				
				if(N[i]>kl[i])
					gt=0;
			}
		}
		
		if(gt==1)
		{
			for(i=0;i<dig;i++)
				kl[i]=N[i];
				
			lenkl=dig;
		}
		
		
		
		borrow=0;

		for(i=0;i<dig;i++)
		{
			if(kl[i]>N[i])
			{
				borrow=1;
				N[i]+=10;
			}
			
			N[i]=N[i]-kl[i];
			
			if(borrow==1)
			{
				j=i+1;
				while(N[j]==0)
				{
					N[j]=9;
					j++;
				}
				N[j]=N[j]-1;

				if(j==dig-1 && N[j]==0)
					dig--;
					
						
				borrow=0;
			}
		}

		i=dig-1;

		while(N[i]==0)
		{	
			dig--;
			i--;
		}
		for(i=dig-1;i>=0;i--)
		{

			div=div*10 + N[i];
			
			if(div>=2)
			{
				res[resdig]=div/2;
				div=div%2;
				resdig++;
			}
			else if(div==0)
			{
				res[resdig]=0;
				resdig++;
			}
		}
	
		if(resdig==0)
		{
			resdig=1;
		}
		
		for(i=resdig-1;i>=0;i--)
			temp[resdig-1-i]=res[i];
	
		tempdig=resdig;
	
		adddig=tempdig;
	
		if(lenkl>adddig)
			adddig=lenkl;
		
		carry=0;	
		for(i=0;i<adddig;i++)
		{
			kl[i]=kl[i]+temp[i]+carry;
					
			carry=kl[i]/10;
			
			kl[i]=kl[i] % 10;
			
			if(carry>0 && i==adddig-1)
				adddig++;
		}
		
		if((kl[0]+temp[0])%10!=t)
		{
			carry=1;
			i=0;
			while(carry>0)
			{
				temp[i]=temp[i]+carry;
				carry=temp[i]/10;
				temp[i]=temp[i]%10;
				i++;
			}
		}

		i=adddig-1;
		while(kl[i]==0)
			i--;
		
		if(i<0)
			i=0;
	
		for(i=i;i>=0;i--)
		{
			printf("%d",kl[i]);
		}
			
		printf("\n");
		
		i=tempdig-1;
			
		while(temp[i]==0)
			i--;
		
		if(i<0)
			i=0;
			
		for(i=i;i>=0;i--)
		{
			printf("%d",temp[i]);
		}		
		
		printf("\n");
		
		T--;

	}
	return 0;
}
