#include<stdio.h>
#include<stdlib.h>
long long int swap=0;

void Merge(int *a,int p,int q,int r)
{
	int i=p,j=q+1,k;
	int temp[r+1];
	for(k=p;k<=r;k++)
		temp[k]=a[k];
	
	for(k=p;k<=r;k++)
	{
		if((i<q+1 && temp[i]<=temp[j]) || j==r+1)
		{
			a[k]=temp[i];
			i++;
		}
		else
		{
			a[k]=temp[j];
			swap = swap+(q-i+1);
			j++;
		}
	}
}

void MS(int *a,int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
		MS(a,p,q);
		MS(a,q+1,r);
		Merge(a,p,q,r);
	}
}

int main(void)
{
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
		int N,i,a[200001];
		scanf("%d",&N);
		
		for(i=0;i<N;i++)
			scanf(" %d[^ ]",&a[i]);
		swap=0;			
		MS(a,0,N-1);
		
//		for(i=0;i<N;i++)
//			printf("%d ",a[i]);
		printf("%lld\n",swap);
	}
}
