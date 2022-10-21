#include <stdio.h>

/**
 * before_main - entry point
 *
 * Return: Always 0
 */
void _attribute_ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
