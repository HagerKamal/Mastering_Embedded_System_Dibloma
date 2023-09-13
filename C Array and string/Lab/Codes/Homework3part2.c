/*
 ============================================================================
 Name        : Homework3part2.c
 Author      : Hager Kamal
 Version     :
 Copyright   : Mastering Embedded Systems
 Description : Homework 3 part 2 in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,frq=0,len=0;
	char data ;

	/* Ex1: C Program to Find the Frequency of Characters in a String */
	char arr[100];
	printf("Enter the string : ");
	fflush(stdin);fflush(stdout);
	gets(arr);
	printf("Enter the character to find frequency : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&data);
	for(i=0;arr[i]!=0;i++)
	{
		if(arr[i]==data)
		{
			frq++;
		}
	}
	printf("\nThe frequency of %c = %d ",data,frq);

	/* EX2: C Program to Find the Length of a String */
	char arr2[100];
	printf("\n\nEnter the string : ");
	fflush(stdin);fflush(stdout);
	gets(arr2);
	for(i=0;arr2[i]!=0;i++)
	{
		len++;
	}
	printf("\nLength of string : %d",len);

	/* EX3: C Program to Reverse String Without Using Library Function */
	char arr3[100];
	printf("\n\nEnter the string : ");
	fflush(stdin);fflush(stdout);
	gets(arr3);
	len=0;
	for(i=0;arr3[i]!=0;i++)
	{
		len++;
	}
	printf("\nReverse string is : ");
	for(i=0;arr3[i]!=0;i++)
	{
		printf("%c",arr3[len-i-1]);
	}
	return EXIT_SUCCESS;
}
