/*
 ============================================================================
 Name        : Thirpro.c
 Author      : Hager Kamal
 Version     :
 Copyright   : Mastering Embedded Systems
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,x;
	printf("Enter the size ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	float arr[x];
	for(i=1;i<=x;i++)
	{
		printf("\nEnter student %d degree : ",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i-1]);
	}
	printf("\n");
	for(i=1;i<=x;i++)
	{
		fflush(stdin);fflush(stdout);
		printf("Student %d degree : %2.2f\n",i,arr[i-1]);
	}
	printf("%x \n%x",&arr[0],&arr[2]);
	/*for(i=1;i<=10;i++)
	{
		fflush(stdin);fflush(stdout);
		printf("%X\n",(arr+i));
	}*/
	/*int arr1[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the element of ( %d , %d ) : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("The matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("The transpose : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[j][i]);
		}
		printf("\n");
	}*/
	return EXIT_SUCCESS;
}
