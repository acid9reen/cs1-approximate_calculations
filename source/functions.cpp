#include <stdio.h>
#include <math.h>
#include "functions.hpp"


void print_table(double x, double steps, int accuracy, int lines, pd_func st_func, pd_i_func func)
{
	int i;
	double error, max = 0;
	
	printf(" x      | f(x)       | fpz(x)     | Err(x)\n");

	for (i = 0; i < lines; i++)
	{
		error = fabs(st_func(x + i * steps) - func(x + i * steps, accuracy));
		if (error > max)
		{
			max = error;
		}
		printf("%lf|%12lf|%12lf|%14e \n", x + i * steps, st_func(x + i * steps), func(x + i * steps, accuracy), error);
	}
	printf("\nMax error: %e", max);
}

void fprint_table(double x, double steps, int accuracy, int lines, pd_func st_func, pd_i_func func)
{
	int i;
	double error, max = 0;
	FILE * pf = fopen("out.txt", "a");

	fprintf(pf, " x       | f(x)       | fpz(x)     | Err(x)\n");


	for (i = 0; i < lines; i++)
	{
		error = fabs(st_func(x + i * steps) - func(x + i * steps, accuracy));
		if (error > max)
		{
			max = error;
		}
		fprintf(pf, "%9lf|%12lf|%12lf|%14e \n", x + i * steps, st_func(x + i * steps), func(x + i * steps, accuracy), error);
	}
	fprintf(pf, "\nMax error: %e\n", max);
	fclose(pf);
}

double exponenta(double x, int n) 
{
	int i;
	double sum = 0;
	double a = 1;
	for (i = 1; i < n; i++) {
		sum += a;
		a *= x / i;
	}
	return sum;
}

double sinus(double x, int n) 
{
	int i;
	double sum = 0;
	double a = x;
	for (i = 1; i < n; i++) {
		sum += a;
		a *= (-1)*x*x / (2 * i*(2 * i + 1));
	}
	return sum;
}

double cosinus(double x, int n) 
{
	int i;
	double sum = 0;
	double a = 1;
	for (i = 1; i < n; i++) {
		sum += a;
		a *= (-1)*x*x / ((2 * i - 1)*(2 * i));
	}
	return sum;
}

double logarifm(double y, int n) 
{
	int i;
	double x = y - 1;
	double sum = 0;
	double a = x;
	for (i = 1; i < n; i++) {
		sum += a / i;
		a *= (-1)*x;
	}
	return sum;
}
