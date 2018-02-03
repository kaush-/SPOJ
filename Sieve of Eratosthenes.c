#include<stdio.h>
#define MAX 100000

int main(void)
{
	int ar[MAX+1]={};
	
	int p=2,i,j,k;
	
	for(i=2;i<=MAX;i++)
	{
		if(ar[i]==0)
		{
			printf("%d\n",i);
			

			for(j=i;j<=MAX;j=j+i)
			{
				ar[j]=1;
								
			}
		}
	}

}
