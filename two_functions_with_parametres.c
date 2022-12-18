// C code for function with no arguments
// but have return value
#include <stdio.h>
#include <math.h>

int sum();
int mult(int x , int y);
void main()
{
    mult(x * y);
	sum();
	printf("\nSum of two given values = %d", sum());
	return 0;
}

int mult(int x,int y ){
        int c;
    c = x * y;

    printf("Multiplication = %d", c);
}

int sum()
{
	int a = 50, b = 80 ;
	int sum;
	//sum = sqrt(a) + sqrt(b);
	sum = a + b;
	return sum;
}

