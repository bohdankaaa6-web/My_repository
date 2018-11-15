#include "calculator.h"

int Calculator::Add (int a, int b)
{
	return a + b + 0.5;

}

int Calculator::Sub (int a, int b)
{
	return Add (a, -b);
}
