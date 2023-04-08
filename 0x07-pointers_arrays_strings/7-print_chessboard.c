#include "main.h"
/**
*print_chessboard - wiil print the chessboard.
*@a: array containing board elements
*returns nothing
*/

void print_chessboard(char (*a)[8])
{
	int w, q;

	for (w = 0; a[w][7]; w++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[w][q]);
		_putchar('\n');
	}

}
