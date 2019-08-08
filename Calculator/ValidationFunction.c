#include<stdio.h>
#include<string.h>
/* Function to check given argument is integer or not */
int Is_Number(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(!isdigit(str[i])&& str[0]!='-' && str[0]!='+' )
			return 0;
	}
	return 1;
}

/* Function to check given argument is operator or not */
int Is_Operator(char *op)
{
	if((strlen(op)==1) && 
	  (op[0]==43||op[0]==94||op[0]==45||op[0]==37||op[0]==42||op[0]==47))
		return 1;
	else
	{
		printf("Enter the correct operator\n"); 
		return 0;
	}		
}

/* Function to calculate the result */
int calculate(int x, int y, char *op) 
{
	switch(op[0])
	{
		case '+':return(x+y);
		case '-':return(x-y);
		case '*':return(x*y);
		case '/':return(x/y);
		case '%':return(x%y);
	}
}
