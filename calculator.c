#include <stdio.h>
typedef void (*funptr)(int, int);

void add(int a, int b)
{
	printf("Sum is: %d\n", a+b);
}

void subtract(int a, int b)
{
	printf("Diff is: %d\n", a - b);

}

void multiply(int a, int b)
{

	printf("Product is: %d\n", a * b);


}
void menu()
{
	while(1)
	{ 
	int a;
	funptr funPtr1;
	printf("Enter your choice:\n");
	printf("1 for addition\n");
	printf("2 for subtraction\n");
	printf("3 for multiplication\n");

	scanf_s("%d", &a);
		switch (a)
		{
			case 1:
				funPtr1 = add;
				funPtr1(3, 4);
				break;
			case 2:
			{
				funPtr1 = subtract;
				funPtr1(3, 4);
				break;
			}
			case 3:
			{
				funPtr1 = multiply;
				funPtr1(3, 4);
				break;
			}
		}
	}
}

int main()
{
	menu();
	return 0;
}
