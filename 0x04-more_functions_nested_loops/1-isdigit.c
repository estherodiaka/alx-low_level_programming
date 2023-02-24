#include "main.h"

/**
 * _isdigit - check for numbers from 0 - 90
 *
 * @c: parameter
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (2);

}
