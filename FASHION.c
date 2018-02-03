#include<stdio.h>

int part(int *ar,int p,int r)
{
	int x=ar[r];
	int i=p-1;
	int j,temp;
	
	for(j=p;j<=r-1;j++)
	{
		if(ar[j]<=x)
		{
			i++;
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
	}
	temp=ar[i+1];
	ar[i+1]=x;
	ar[r]=temp;
	
	return i+1;
}

void Qs(int *ar,int p, int r)
{
	int q;
	if(p<r)
		{
		q=part(ar,p,r);
		Qs(ar,p,q-1);
		Qs(ar,q+1,r);
		}
		

}

int main(void)
{
	int T;
	scanf(" %d",&T);
	
	while(T>0)
	{
		int M[1001]={},W[1001];
		int N,i;
		long long int sum=0;
		
		scanf(" %d",&N);
		
		for(i=0;i<N;i++)
			scanf(" %d[^ ]",&M[i]);
		
		Qs(M,0,N-1);
		
		for(i=0;i<N;i++)
			scanf(" %d[^ ]",&W[i]);
		
		Qs(W,0,N-1);
		
		for(i=0;i<N;i++)
		{
			sum=sum+(long long int)(M[i]*W[i]);
		}
		
		printf("%lld\n",sum);
		T--;
	}

	return 0;
}
