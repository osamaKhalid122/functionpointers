#include <stdio.h>
#include <xkeycheck.h>

//Function Pointers//

#define PI 3.1416

void rectangleArea(int a, int b)
{
	printf("Area of rectangle is: %d", a * b);
}

void circleCircumference(int r)
{
	int circum = (2*r*PI);
	printf("Circumference of Circle is: %d ", circum);
}

void circleArea(int r)
{
	printf("Area of Circle is: %d ",(r * r));
}

void volumeOfSphere(int r)
{
	printf("Volume of Spehere is: %d", r * r * r);
}

int main()
{
	int radius = 5;
	void (*calculateArea[3])(int) = {circleArea, circleCircumference, volumeOfSphere};
	int* ptr[3] = {NULL, NULL, NULL};

	for (int i = 0; i < 3; i++)
	{
		(*calculateArea[i]) (radius);
		printf("\n");
	}


	return 0;
}
