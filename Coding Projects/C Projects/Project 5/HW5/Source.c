#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//the prototypes
int	getnumber ();
void	getnumbers (int*, int*, int*);
int	menu (void);
int selection;
int	times(int, int );
float divide(int, int);
void	 bye();

int main()
{
	int a, b, c;

	printf("\n\tEnter the three numbers:");

	scanf("%d%d%d", &a, &b, &c);
	
	selection = menu();

}

int menu(void)
{
	int x;
	do {
		printf("\n\n\tChoose from the following options:");
		printf("\n\t1, 2, or 3?");
		printf("\n\t\t1 to print the two highest numbers");
		printf("\n\t\t2 to print the product of the three numbers");
		printf("\n\t\t3 to print the division of the second number by the third:");

		scanf("\n\n%d", &x);
	} while (x > 3 || x < 1); 

	return x;
}