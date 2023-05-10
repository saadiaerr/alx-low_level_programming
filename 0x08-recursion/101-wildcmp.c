#include "main.h"
char *move(char *s2);
int incept(char *s1, char s2);
/**
 * move : character
 * @s2: string num 2
 * Return: 0
 */
char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1));
	else
		return (s2);
}

/**
  * incept: inception
  * @s1: string num 1
  * @s1: string num 2
  * Return: 1 or 0
  */
int incept(char *s1, char s2)
{
	if (*s1 == 0)
	return (0);
	int r = 0;

	if (*s1 == *s2)
	r += wilcmp(s1 + 1, s2 + 1);
	r += incept(s1 + 1, s2);
	return (r);
}

/**
 * wildcmp - Compare 2 strings
 * @s1: string num 1
 * @s2: string num 2
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*move(s2))
			return(0);

	if (*s1 == *s2)
	{
	if (!*s1)
		return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
	s2 = move(s2);
	if (!*s2)
	return (1);
	if (*s1 == *s2)
	r += wildcamp(s1 + 1, s2 + 1);
	r += incept(s1, s2);
	return (!!r);
	}
	return (0);


}
