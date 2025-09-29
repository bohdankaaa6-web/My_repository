#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdexcept>
class Calculator
{
	public:
        	int Add (int, int);
        	int Sub (int, int);

	public:
		int Add (double, double);
		int Sub (double, double);
		int Mul (double, double);
		int Div (double, double);//new method
};

#endif//CALCULATOR_H
