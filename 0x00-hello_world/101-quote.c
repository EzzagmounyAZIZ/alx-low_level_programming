#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a message to standard error
 *
 * Return: Always 1
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
