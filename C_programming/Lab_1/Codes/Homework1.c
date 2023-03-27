/*
 ============================================================================
 Name        : Homework1.c
 Author      : Hager Kamal
 Version     :
 Copyright   : Mastering Embedded Systems
 Description : Homework 1 , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* EX1 */
	printf("C Programming. \r\n");

	/* EX2 */
	int x;

	printf("Enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	printf("You entered : %d\r\n",x);

	/* EX3 */
	int n1 , n2 ;

	printf("Enter two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d,%d",&n1,&n2);

	printf("Sum : %d\r\n",n1+n2);

	/* EX4 */
	float f1,f2;

	printf("Enter two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f,%f",&f1,&f2);

	printf("Product : %f\r\n",f1*f2);

	/* EX5 */
	char c;

	printf("Enter a character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);

	printf("ASCII value of %c = %d\r\n",c,c);

	/* EX6 */
	float a,b,temp;

	printf("Enter the value of a : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter the value of b : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);

	temp=a;
	a=b;
	b=temp;

	printf("After Swapping, The value of a = %.2f\n",a);
	printf("After Swapping, The value of b = %.2f\r\n",b);

	/* EX7 */
	float a1,b1;

	printf("Swapping without temp variable.\n");
	printf("Enter the value of a : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a1);
	printf("Enter the value of b : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b1);

	a1+=b1;
	b1=a1-b1;
	a1-=b1;

	printf("After Swapping, The value of a = %.2f\n",a1);
	printf("After Swapping, The value of b = %.2f\r\n",b1);

	return EXIT_SUCCESS;
}
