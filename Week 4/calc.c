//calc.c
#include <stdio.h>
// #include <math.h>
#include "calc.h"


// ¥ı«œ±‚
double sum(double value1, double value2)
{
	return value1 + value2;
}

// ª©±‚
double sub(double value1, double value2)
{
	return value1 - value2;
}

// ∞ˆ«œ±‚
double mul(double value1, double value2)
{
	return value1 * value2;
}

// ≥™¥©±‚
double div(double value1, double value2)
{
	if (value2 != 0)
		return value1 / value2;
	else
	{
		printf("Error: Divide by 0!");
		return 0;
	}
}

// ≥™∏”¡ˆ
int rem(int value1, int value2)
{
	if (value2 != 0)
		return value1 % value2;
	else
	{
		printf("Error: Divide by 0!");
		return 0;
	}
}

// ¡¶∞ˆ
double power(double base, double exponent)
{
	return pow(base, exponent);
}

// ¡¶∞ˆ±Ÿ
double squareRoot(double num)
{
	if (num >= 0)
		return sqrt(num);
	else
	{
		printf("Error: Negative number!");
		return -1;
	}
}

// ≥–¿Ã
double areaOfCircle(double radius)
{
	return M_PI * radius * radius;
}

// µ—∑π
double circumferenceOfCircle(double radius)
{
	return 2 * M_PI * radius;
}
