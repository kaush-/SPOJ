#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int isnum(char *str)
{
	int i;	
	for(i=0;i<strlen(str);i++)
	{
		if(!isdigit(str[i]))
			return 0;
	}
	
	return 1;
}

int main(void)
{
	int T;
	scanf("%d",&T);
	
	while(T>0)
	{
		char a[50],b[50],c[50];
		
		scanf(" %s + %s = %s",a,b,c);
		
		if(isnum(a) && isnum(b))
			printf("%d + %d = %d\n",atoi(a),atoi(b),atoi(a)+atoi(b));
		else if(isnum(a) && isnum(c))
			printf("%d + %d = %d\n",atoi(a),atoi(c)-atoi(a),atoi(c));
		else if(isnum(b) && isnum(c))
			printf("%d + %d = %d\n",atoi(c)-atoi(b),atoi(b),atoi(c));		
		T--;		
	}
	return 0;
}
