#include<stdio.h>
#include<string.h>

int add(int *op1,int *op2,int len)
{
	int i,carry=0;
	for(i=0;i<len;i++)
	{
		op1[i]=op1[i]+op2[i]+carry;
		
		carry=op1[i]/10;
		
		op1[i]=op1[i]%10;
		
		if(carry>0 && i==len-1)
			len++;
			
	}
	
	return len;
}


int main(void)
{
	int T,i;
	scanf("%d",&T);
	
	while(T>0)
	{
		char str1[10001],str2[10001];
		int op1[10001]={},op2[10001]={};
		int len;
		
		scanf(" %s[^ ]",str1);
		len=strlen(str1);
		
		scanf(" %s",str2);
		if(len<strlen(str2))
			len=strlen(str2);
			
		for(i=0;i<strlen(str1);i++)
			op1[i]=str1[i]-'0';

		for(i=0;i<strlen(str2);i++)
			op2[i]=str2[i]-'0';
			
		len=add(op1,op2,len);
		
		while(op1[len-1]==0)
		len--;
		
		i=0;
		while(op1[i]==0)
		i++;
		
		for(i=i;i<len;i++)
			printf("%d",op1[i]);
			
		printf("\n");
		
		T--;
	}
	
	return 0;

}
