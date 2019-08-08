#include<stdio.h>
#include<string.h>
#include"header.h"

void  main(int argc, char *argv[])
{
	//printf("%d\n",argc);
	if(argc!=4)
		printf("Enter the data in the following order: <Operand1> <Operator> <Operand2>\n");

	//else if(sscanf(argv[1],"%d",&a)&&sscanf(argv[2],"%d",&a))
	else if(Is_Number(&argv[1][0])&&Is_Number(&argv[3][0])&&Is_Operator(&argv[2][0]))
		printf("=%d\n",calculate(atoi(argv[1]),atoi(argv[3]),argv[2]));	
	else
		printf("INVALID OPERANDS\n");
}

