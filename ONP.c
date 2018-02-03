#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(char *stack,int *tos,char val)
{
	(*tos)++;
	stack[(*tos)]=val;

}
char pop(char *stack,int *tos)
{
	(*tos)--;
	return(stack[(*tos)+1]);

}



int main(void)
{
	int T,i;
	
	scanf(" %d",&T);
	
	while(T>0)
	{
		char exp[400];
		
		scanf(" %s",exp);
		
		char opt[400];
		int topt=-1;
		
		for(i=0;exp[i]!='\0';i++)
		{
			switch (exp[i])
			{
				case '(':case '^':push(opt,&topt,exp[i]);
							   break;
				
				case '/':while((opt[topt]=='^'))
					    		printf("%c",pop(opt,&topt));
					    push(opt,&topt,exp[i]);
					    break;
					    
				case '*':while((opt[topt]=='^') || (opt[topt]=='/'))
					    		printf("%c",pop(opt,&topt));
					    push(opt,&topt,exp[i]);
					    break;
					    
				case '-':while((opt[topt]=='^') || (opt[topt]=='/') || (opt[topt]=='*'))
					    		printf("%c",pop(opt,&topt));
					    push(opt,&topt,exp[i]);
					    break;
				
				case '+':while((opt[topt]=='^') || (opt[topt]=='/') || (opt[topt]=='*') || (opt[topt]=='-'))
					    		printf("%c",pop(opt,&topt));
					    push(opt,&topt,exp[i]);
					    break;
					    
				case ')':while((opt[topt]!='('))
							printf("%c",pop(opt,&topt));
					    topt--;
					    //c=pop(opt,&topt);
					    break;
					    
				default:printf("%c",exp[i]);
			}
		}
		printf("\n");
		T--;
		
		

	}
	return 0;
}
