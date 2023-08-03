#include "main.h"

/**
 * _pow_recursion - x power y.
 *
 * @x: a int
 * @y: a int
 * Return: x**y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x *  _pow_recursion(x,y - 1));
	}
}
