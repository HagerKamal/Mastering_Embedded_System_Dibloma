/*
 ============================================================================
 Name        : Firpro.c
 Author      : Hager Kamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	/*printf tricks*/

	/*Trick 1*/
	
	printf("Variable width control: \n");

	printf("right-justified variable width: '%*s'\n", 5, "Hagerr");

	printf("left-justified variable width: '%*s'\n", -5,"Hagerr");
	

	/*Trick 2*/
	
	int r = printf("Strings:%.7f",155.2222222);
	printf("(the last printf printed %d characters)\n", r);
	

	/*Trick 3*/
	
	const char* s = "Hello";
	printf("\t[%10s]"
			"\n\t[%-10s]"
			"\n\t[%*s]"
			"\n\t[%10.*s]"
			"\n\t[%-*.*s]\n"
			, s, s, 10, s, 4, s, 10, 4, s);
	

	/*Trick 4*/
	printf("Characters:\t%c %\n", 60);

	/*Trick 5*/
	
	printf("Integers\n");

	printf("Decimal:\t%i"
			" %d "
			"%.6d "
			"%i "
			"%.0i "
			"%+i "
			"%u\n"
			, -1, 2, 3, 0, 0, -4, -2);

	printf("Hexadecimal:\t%x "
			"%x "
			"%X "
			"%#x\n"
			, 5, 10, 10, 10);

	printf("Octal:\t%o "
			"%#o "
			"%#o "
			"%o\n"
			, 8, 10, 4, 4);
	

	/*Trick 6*/
	
	printf("Floating point\n");

	printf("Rounding: \t%f "
			"%.0f "
			"%.32f\n"
			, 1.5, 1.5, 1.5);

	printf("Padding:\t%05.2f "
			"%.2f "
			"%5.2f\n"
			, 1.5, 1.5, 1.5);
	printf("Scientific:\t%E "
			"%e\n"
			, 1.5, 1.5);
	printf("Special values: \t 0/0=%g "
			"1/0=%g\n"
			, 0.0/0.0, 1.0/0.0);
	 

	/*Trick 7*/
	
	unsigned char x=0;
	printf ("C_trick:\t%d %d %d\n",++x,x,x++);

	printf ("C_trick: \t%d %d %d\n",x++,++x,x);
	printf("\t\t%d",x);
	 

	return EXIT_SUCCESS;
}
