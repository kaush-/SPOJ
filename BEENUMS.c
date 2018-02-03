#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
bool check(long long a){
	if((a/3)*3==a)
		return true;
	return false;
}

bool check2(long long a){
	if((a/2)*2==a)
		return true;
	return false;
}

int main(void){
	while(1){
		long long N;
		scanf("%lld",&N);
		if(N==-1)
			break;
		
		if(check(N-1)==false){
			printf("N\n");
			continue;
		}
		
		long long temp = (-1 + sqrt(1 + (4*(N-1)/3)))/2;
		long long temp1 = 1 + 3 * (temp * (temp + 1));
		if(temp1 == N)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
