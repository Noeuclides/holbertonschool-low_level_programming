#include "holberton.h"

/**
 **rot13 - change all lowercase to upper
 *
 *@s: pointer array
 *
 *Return: return character succeed
 *
 */

char *rot13(char *s)
{
	int i;
	/*char UPPER[] = "ABCDEFGHIJKLM";*/

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
			s[i] += 13;
		else if ((s[i] > 77 && s[i] < 91) || (s[i] > 110 && s[i] < 123))
			s[i] -= 13;
	}

	return (s);
}
