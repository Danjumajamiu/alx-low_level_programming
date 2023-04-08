#include "main.h"
/**
*_strstr - finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int q;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		q = 0;

		if (haystack[q] == needle[q])
		{
			do {
				if (needle[q + 1] == '\0')
					return (haystack);
				q++;
			} while (haystack[q] == needle[q]);
		}
		haystack++;
	}
	return ('\0');
}
