#include<stdio.h>
#include<stdlib.h>
#define max 100000
int val[max],temp[max];
long long int res;

void merge(int a,int mid,int b)
{
	int i=a;
	int j=mid+1;
	int k;
	
	for(k=a;k<=b;k++)
	{
		if((val[i]<val[j] || j==b+1) && i!=mid+1)
		{
			temp[k]=val[i];
			res=res+(long long int)(b-j+1) * val[i];
			i++;
		}
		else
			temp[k]=val[j++];
	}
	for(i=a;i<=b;i++)
		val[i]=temp[i];
}
void MS(int a,int b)
{
	if(a<b)
	{
		int mid=a+(b-a)/2;
		MS(a,mid);
		MS(mid+1,b);
		merge(a,mid,b);
	}
}

int main(void)
{
	int T;
	scanf(" %d",&T);
	
	while(T>0)
	{
		
		int n,i;
		scanf(" %d",&n);
		for(i=0;i<n;i++)
			scanf("%d[^ ]",&val[i]);
		res=0;	
		MS(0,n-1);
		printf("%lld\n",res);


		T--;
	}
	return 0;
}
