#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
typedef long long ll; 

int main(void){
	int N,i;
	scanf("%d", &N);
	char str[100000],str1[100000];
	scanf("%s", str);
	
	for(i = 0; i<2*N ; i=i+2){
		char val[4] = {'A','B','C','D'};
		switch(str[i]){
			case 'A': val[0] = 'E';break;
			case 'B': val[1] = 'E';break;
			case 'C': val[2] = 'E';break;
			case 'D': val[3] = 'E';break;
		}
		
		switch(str[i+1]){
			case 'A': val[0] = 'E';break;
			case 'B': val[1] = 'E';break;
			case 'C': val[2] = 'E';break;
			case 'D': val[3] = 'E';break;
		}
		
		char ch[2];
		int j,k=0;
		for(j = 0; j<4;j++){
			if(val[j]!='E'){
				ch[k] = val[j];
				k++;
			}
		}
		if(i==0){
			str1[i] = ch[0];
			str1[i+1] = ch[1];
		}
		else{
			if(str1[i-1]==ch[0]){
				str1[i+1] = ch[0];
				str1[i] = ch[1];			
			}
			else{
				str1[i] = ch[0];
				str1[i+1] = ch[1];
			}
		}
		

	}
	str1[i]='\0';
	printf("%s\n",str1);
	return 0;
}
