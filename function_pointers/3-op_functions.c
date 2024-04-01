#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - the function adds 2 numbers.
  *@a: num1
  *@b: num2
  *
  *Return: returns the result of the sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - the function subtract 2 numbers
  *
  *@a: num1
  *@b: num2
  *Return: return subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - funtion that return product
  *
  *@a: num1
  *@b: num2
  *
  *Return: return product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - the function divide 2 numbers
  *
  * @a: num1
  * @b: num2
  *
  * Return: return division result or error if b == o
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - The function returns the remainder of the division.
  *
  * @a: num1
  * @b: num2
  *
  * Return: return remainder or if b == 0 return error
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
