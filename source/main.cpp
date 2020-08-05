#include <stdio.h>
#include <math.h>
#include "functions.hpp"

int main()
{
	int func = 0, accuracy, lines;
	double argument, steps;

	FILE *pf = fopen("out.txt", "w");
	fclose(pf);

	do
	{
		printf("1.| Sin  |\n");
		printf("--|------|\n");
		printf("2 | Cos  |\n");
		printf("--|------|\n");
		printf("3.| Log  |\n");
		printf("--|------|\n");
		printf("4.| Exp  |\n");
		printf("--|------|\n");
		printf("0.| Exit |\n");

		printf("\nEnter function number: ");
		scanf("%i", &func);

		if (!func)
			break;

		printf("Enter values in the following order: argument, steps, 1 < accuracy < 100, number of lines\n");
		scanf("%lf%lf%i%i", &argument, &steps, &accuracy, &lines);
		printf("\n");

		switch (func)
		{
		case 1: print_table(argument, steps, accuracy, lines, sin, sinus); 
				fprint_table(argument, steps, accuracy, lines, sin, sinus);
			break;
		case 2: print_table(argument, steps, accuracy, lines, cos, cosinus);
				fprint_table(argument, steps, accuracy, lines, cos, cosinus);
			break;
		case 3: print_table(argument, steps, accuracy, lines, log, logarifm);
				fprint_table(argument, steps, accuracy, lines, log, logarifm);
			break;
		case 4: print_table(argument, steps, accuracy, lines, exp, exponenta);
				fprint_table(argument, steps, accuracy, lines, exp, exponenta);
			break;
		}

		printf("\n\n\nOnce again? (Y - 1, N - 0): ");
		scanf("%d", &func);
		printf("\n\n\n");
	} 
	while(func != 0);

	return 0;
}
