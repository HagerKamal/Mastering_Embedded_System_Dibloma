/*
 ============================================================================
 Name        : Homework2.c
 Author      : Hager Kamal
 Version     :
 Copyright   : Mastering Embedded Systems
 Description : Homework 2 , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* EX1 */
	int x;

	printf("Enter an integer you want to check : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	printf("%d",x);
	printf((x%2)? " is odd\r\n" :" is even\r\n");

	/* EX2 */
	char c1;

	printf("Enter an alphabet : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c1);

	if(c1=='a' || c1=='A' || c1=='e' || c1=='E' || c1=='i' || c1=='I'
			|| c1=='o' || c1=='O' || c1=='u' ||c1=='U')
		printf("%c is a vowel.\r\n",c1);
	else if((c1>=65 && c1<=90)||(c1>=97 && c1<=122))
		printf("%c is a constant.\r\n",c1);
	else
		printf("%c is not an alphabet.\r\n",c1);

	/* EX3 */
	float a=0.0, b=0.0, c=0.0;

	printf("Enter Three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f,%f,%f", &a, &b, &c);

	/* First Method */
	printf("First Method\n");
	if(a>b && a>c)
		printf("First number was the largest.\t the largest equal %.2f\r\n",a);
	else if(b>a && b>c)
		printf("Second number was the largest.\t the largest equal %.2f\r\n",b);
	else if(c>b && c>a)
		printf("Third number was the largest.\t the largest equal %.2f\r\n",c);
	else if(a==b && a>c)
		printf("First and Second numbers ware equal and larger than Third.\t the largest equal %.2f\r\n",a);
	else if(a==c && a>b)
		printf("First and Third numbers ware equal and larger than Second.\t the largest equal %.2f\r\n",a);
	else if(b==c && b>a)
		printf("Second and Third numbers ware equal and larger than Third.\t the largest equal %.2f\r\n",b);
	else
		printf("The Three numbers are equal.\t the largest equal %.2f\r\n",b);

	/* Second Method */
	printf("Second Method\n");
	if(a>b)
	{
		if(a>c)
		{
			printf("%.2f is the largest.\r\n",a);
		}
		else
		{
			printf("%.2f is the largest.\r\n",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%.2f is the largest.\r\n",b);
		}
		else
		{
			printf("%.2f is the largest.\r\n",c);
		}
	}

	/* EX4 */
	float v;

	printf("Enter a number : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&v);

	if(v>0.0)
		printf("%.2f is positive.\r\n",v);
	else if(v<0.0)
		printf("%.2f is negative.\r\n",v);
	else
		printf("You entered zero.\r\n");

	/* EX5 */
	char c2;

	printf("Enter a character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c2);

	if((c2>=65 && c2<=90)||(c2>=97 && c2<=122))
	{
		printf("%c is an alphabet.\r\n",c2);
	}
	else
	{
		printf("%c is not an alphabet.\r\n",c2);
	}

	/* EX6 */
	int n,i,sum=0;

	printf("Enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		sum+=i;
	}

	printf("Sum = %d\r\n",sum);

	/* EX7 */
	int num;
	long int fac=1;

	printf("Enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	if(num<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist\r\n");
	}
	else if(num<=1)
	{
		printf("Factorial = %ld\r\n",fac);
	}
	else
	{
		while(num>1)
		{
			fac*=num;
			num--;
		}
		printf("Factorial = %ld\r\n",fac);
	}

	/* EX8 */
	char o;
	float v1,v2;

	EX7 :
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&o);
	printf("Enter two operands : ");
	fflush(stdin);fflush(stdout);
	scanf("%f,%f",&v1,&v2);

	switch(o)
	{
	case '+':
		printf("%.1f %c %.1f = %.1f\r\n",v1,o,v2,v1+v2);
		break;
	case '-':
		printf("%.1f %c %.1f = %.1f\r\n",v1,o,v2,v1-v2);
		break;
	case '*':
		printf("%.1f %c %.1f = %.1f\r\n",v1,o,v2,v1*v2);
		break;
	case '/':
	{
		if(v2!=0)
		{
			printf("%.1f %c %.1f = %.1f\r\n",v1,o,v2,v1/v2);
		}
		else
		{
			printf("Division by Zero is not allowed.\r\n");
			goto EX7;
		}
	}
	break;
	default :
		printf("you entered wrong operator.\r\n");
		goto EX7;
		break;
	}

	return EXIT_SUCCESS;
}
