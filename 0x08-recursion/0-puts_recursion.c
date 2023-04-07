#include"main.h"
/**
 * _puts_recursion - print a string
 * @s: parameter of function
 * Return: Return nothing 
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
