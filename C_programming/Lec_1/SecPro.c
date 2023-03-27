/*
 ============================================================================
 Name        : SecPro.c
 Author      : Hager Kamal
 Version     :
 Copyright   : Mastering Embedded Systems
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char c;
	float r ;

	printf("Enter The radius : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&r);
	printf("Enter The choice ( a -> Area or c -> Circumference ) : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);

	if(c=='a'||c=='A')
		printf("Area is %f",3.14159*r*r);
	else if(c=='c'||c=='C')
		printf("Circumference is %f",2*3.14159*r);
	else
		printf("Error in choice");
	 
	
	int a, b, c;

	printf("Enter Three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d,%d,%d", &a, &b, &c);

	if(a>b && a>c)
		printf("First number was the largest.\t the largest equal %d",a);
	else if(b>a && b>c)
		printf("Second number was the largest.\t the largest equal %d",b);
	else if(c>b && c>a)
		printf("Third number was the largest.\t the largest equal %d",c);
	else if(a==b && a>c)
		printf("First and Second numbers ware equal and larger than Third.\t the largest equal %d",a);
	else if(a==c && a>b)
		printf("First and Third numbers ware equal and larger than Second.\t the largest equal %d",a);
	else if(b==c && b>a)
		printf("Second and Third numbers ware equal and larger than Third.\t the largest equal %d",b);
	else
		printf("The Three numbers are equal.\t the largest equal %d",b);



	if(a>b)
	{
		if(a>c)
		{
			printf("a");
		}
		else
		{
			printf("c");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b");
		}
		else
		{
			printf("c");
		}
	}
	 
	
	int a, b, min;

	printf("Enter Two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d,%d", &a, &b);

	min=(a<b)?a:b;

	printf("The minimum : %d",min);
	printf("The minimum : %d",(a<b)?a:b);
	 
	
	char c;
	float r ;

	printf("Enter The radius : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&r);
	printf("Enter The choice ( a -> Area or c -> Circumference ) : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);

	switch(c)
	{
	case 'a':
	case 'A':
		printf("Area is %f",3.14159*r*r);
		break;
	case 'c':
	case 'C':
		printf("Circumference is %f",2*3.14159*r);
		break;
	default:
		printf("Error in choice");
		break;
	}
	 
	
	int S=0,i;
	for(i=0;i<100;i++)
	{
		S+=i;
	}
	printf("Summation (From 1 to 99) : %d",S);
	 
	
	int n, i;
	float s=0.0,d;
	printf("Enter the number of students : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter student %d degree : ",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&d);
		s+=d;
	}
	s/=n;
	printf("The Average of student degrees is  %.2f",s);
	 
	
	int i=1, s=0;
	while(i<100)
	{
		s+=i;
		i+=2;
	}
	printf("Summation odds (From 1 to 100) : %d",s);
	 
	
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	 
	return EXIT_SUCCESS;
}
