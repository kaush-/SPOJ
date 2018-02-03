#include<stdio.h>
int Water(int,int);
int Air(int,int);
int Fire(int,int);

int max(int a,int b)
{
	if(a>=b)
		return a;
	else
		return b;
}

int Maxx(int a,int b,int c)
{
	int d=max(a,b);
	
	return(max(d,c));
}

int Fire(int H,int A)
{
	H=H-20;
	A=A+5;

	if(H<=0 || A<=0)
		return 0;
		
//	printf("FIRE: %d,%d\n",H,A);
	return (1+Air(H,A));
}


int Water(int H,int A)
{
	H=H-5;
	A=A-10;

	if(H<=0 || A<=0)
		return 0;
		
//	printf("WATER: %d,%d\n",H,A);
	return (1+Air(H,A));
}


int Air(int H,int A)
{
	H=H+3;
	A=A+2;

	if(H<=0 || A<=0)
		return 0;

	if(A<=10)		
		return(1+Fire(H,A));
	else
		return(1+Water(H,A));
//	printf("AIR: %d,%d\n",H,A);
//	return max(1+Water(H,A),1+Fire(H,A));
}

int main(void)
{
	int T;
	scanf("%d",&T);
	
	while(T>0)
	{
		int H,A;
		int sur;
		
		scanf(" %d%d",&H,&A);

		sur=Air(H,A);
//		sur=Maxx(Air(H,A),Water(H,A),Fire(H,A));
		
		printf("%d\n",sur);
		T--;
	}
	return 0;
}
