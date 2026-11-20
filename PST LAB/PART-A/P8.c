#include<stdio.h>
#include<conio.h>
void main()
{
	char op;
	float num1,num2,result;
	clrscr();
	printf("enter the operator:");
	scanf("%c",&op);
	printf("enter the no:");
	scanf("%f%f",&num1,&num2);

	switch(op)
	{
		case '+':
			result=num1+num2;
			printf("Result:%.2f+%.2f=%.2f",num1,num2,result);
			break;
		case '-':


		case '*':


		case '/':
			if(num2!=0)
			{
				result=num1/num2;
				printf("Result:%f/%f=%f",num1,num2,result);
			}
			else
				printf("Error! Division is not Possible");


		case '%':



		default:
			printf("Error! Invaild Operator");
	}
	getch();
}
/*
OUTPUT:
Enter an operator: +
Enter the numbers: 10 20
Result: 10.000000 + 20.000000 = 30.000000

Enter an operator: 
Enter the numbers: 20 10
Result: 20.000000 - 10.000000 = 10.000000

Enter an operator: *
Enter the numbers: 10 20
Result: 10.000000 * 20.000000 = 200.000000

Enter an operator: /
Enter the numbers: 20 10
Result: 20.000000 / 10.000000 = 2.000000

Enter an operator: /
Enter the numbers: 10 0
Error: division by zero is not allowed 

Enter an operator: &
Enter the numbers: 10 20
Error: Invalid Operator
   */