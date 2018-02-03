#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
long long arr[1000];
int count = 0;
long long M = 30;

bool mod(long long a, long long b){
	if((a/b)*b==a)
		return true;
	else
		return false;
}
void getLucky(){
	long long N = M;
	int test =0;
	
	if(mod(N,2)){
		test++;
		while(mod(N,2))
			N = N/2;
	}
	long long i;
	for (i = 3; i <= (long long)sqrt(N); i = i+2)
    {
		if(mod(N,i)){
			test++;
	        while (mod(N,i))
	        	N = N/i;
    	}
    }
    
	if(N>2)
		test++;
    if(test>=3){
    	arr[count]=M;
    	count++;
    	M++;
    	return;
    }
    else{
    	M++;
    	getLucky();
    }
}



int main(void){
	while(count<1000)
		getLucky();
	int i;
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", arr[n-1]);
	}
	return 0;


	for(i = 0; i<1000;i++)	
		printf("%lld ",arr[i]);


}
