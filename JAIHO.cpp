#include<bits/stdc++.h>

using namespace std;

int main(void){
	int T;
	scanf("%d",&T);
	
	while(T--){
		int m,d,y;
		scanf("%d.%d.%d",&d,&m,&y);
		
		int weekday = (d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7 ;
		if(y<1947)
			printf("Invalid.\n");
		else if(weekday==5)
			printf("Yes.\n");
		else
			printf("No.\n");
	}
	return 0;
}
