#pragma once

typedef double(*pd_func)(double);
typedef double(*pd_i_func)(double, int);

void print_table(double x, double steps, int accuracy, int lines, pd_func st_func, pd_i_func func);
void fprint_table(double x, double steps, int accuracy, int lines, pd_func st_func, pd_i_func func);
double exponenta(double x, int n);
double sinus(double x, int n);
double cosinus(double x, int n); 
double logarifm(double y, int n);
