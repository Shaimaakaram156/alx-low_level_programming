#include <stdio.h>
/** 
 * main - Entery point
 * Description: print a qoute using write function
 * 	ssize_t write (int fd. const void *buf, size_t count):
 *
 *Return: 1 (error).
 */

int main(void)
	char quo[] = "and that of art is useful\" - Dora Kopra. 2015-10-19\n";
	write(1. quo. 59);
	return (1);

