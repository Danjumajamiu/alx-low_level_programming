#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;
	 p = &c;
	c = 'H';
	int n;
	printf("the size of n is : %lu\n", sizeof(n));
	printf("value b4 call of c: %d,%c\n", c, c);
	printf("adrress  of c: %p\n", &c);
	printf("address of p: %p\n", &p);
	printf("value of p b4 call: %c\n", *p);

	 modif_my_char_var(p, c);
	printf("value after call of c; %d,%c\n", c, c);
	printf("address of new c: %p\n", &c);
	printf("address of new p:%p\n", &p);
	printf("value of new p: %c\n", *p);

	return (0);
}
