/*
 * File: 2-strlen.c
 * Author: Oniya Olaiya
 * Description: This returns the length of a string passed in.
 *
 */

#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Function to swap an integerm.
 *
 * Description: This function is the swaps 2 pointers holding.
 *		ineger values.
 * @s: The second int.
 * Return: void (Success)
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
