#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Printing a buffer of 10 bytes at a time, starting with
 *                the byte position, and showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int bytes, findex;

	for (bytes = 0; bytes < size; bytes += 10)
	{
		printf("%08x: ", bytes);

		for (findex = 0; findex < 10; findex++)
		{
			if ((findex + bytes) >= size)
				printf("  ");
			else
				printf("%02x", *(b + findex + bytes));
			if ((findex % 2) != 0 && findex != 0)
				printf(" ");
		}
		for (findex = 0; findex < 10; findex++)
		{
			if ((findex + bytes) >= size)
				break;
			else if (*(b + findex + bytes) >= 31 &&
				 *(b + findex + bytes) <= 126)
				printf("%c", *(b + findex + bytes));
			else
				printf(".");
		}
		if (bytes >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
