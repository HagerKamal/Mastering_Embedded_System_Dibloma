/*
 ============================================================================
 Name        : Homework3.c
 Author      : Hager Kamal
 Version     :
 Copyright   : Mastering Embedded Systems
 Description : Homework 3 in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,x,r,c;
	int data ,loc;

	/* EX1: Example of Multidimensional Array In C */
	float arr1[2][2],arr2[2][2],arr[2][2];
	printf("Enter the elements of 1st matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter the element of a( %d , %d ) : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}
	printf("\nEnter the elements of 2nd matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter the element of b( %d , %d ) : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("Sum of Matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.1f\t",arr[i][j]);
		}
		printf("\n");
	}

	/* EX2: C Program to Calculate Average Using Arrays */
	printf("Enter the number of data : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	float avr[x];
	float sum;
	for(i=0;i<x;i++)
	{
		printf("\n%d. Enter number : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&avr[i]);
		sum+=avr[i];
	}
	printf("Average = %.2f\n",sum/x);

	/* EX3: C Program to Find Transpose of a Matrix */
	printf("\nEnter rows and columns of matrix : ");
	fflush(stdin);fflush(stdout);
	scanf("%d,%d",&r,&c);
	int ar[r][c];
	printf("\nEnter elements of matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the element of ( %d , %d ) : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&ar[i][j]);
		}
	}
	printf("The matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix : \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",ar[j][i]);
		}
		printf("\n");
	}

	/* EX4: C Program to Insert an element in an Array */
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int ar2[x];
	printf("\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&ar2[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&data);
	printf("\nEnter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);
	int ar3[x+1];
	for(i=0;i<=x;i++)
	{
		if(i==loc-1)
		{
			ar3[i]=data;
		}
		else if (i<loc-1)
		{
			ar3[i]=ar2[i];
		}
		else
		{
			ar3[i]=ar2[i-1];
		}
	}
	for(i=0;i<=x;i++)
	{
		printf("%d ",ar3[i]);
	}

	/* Another solution */
	/* EX4: C Program to Insert an element in an Array */
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int ar4[x+1];
	printf("\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&ar4[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&data);
	printf("\nEnter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);
	for(i=x;i>=loc;i--)
	{
		ar4[i]=ar4[i-1];
	}
	ar4[loc-1]=data;
	for(i=0;i<=x;i++)
	{
		printf("%d ",ar4[i]);
	}

	/* EX5: C Program to Search an element in Array */
	printf("\n\nEnter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int ar1[x];
	printf("\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&ar1[i]);
	}
	printf("\nEnter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&data);
	for(i=0;i<x;i++)
	{
		if(ar1[i]==data)
		{
			loc=i+1;
			break;
		}
	}
	if(i==x)
	{
		printf("\nNumber not found");
	}
	else
	{
		printf("\nNumber found at the location = %d",loc);
	}


	return EXIT_SUCCESS;
}
