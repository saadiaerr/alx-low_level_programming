#include "main.h"
int is_palindrome(char *s);
int check_palindrome(char *s, int stt, int ed, int md);
/**
 * last_index - returns to the last index of a string
 * @s: string to calculate
 * Return: int
 */
int last_index(char *s)
{
	int m = 0;

	if (*s > '\0')
		m += last_index(s + 1) + 1;
	return (m);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int ed = last_index(s);

	return (check_palindrome(s, 0, ed - 1, ed % 2));
}
/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @stt: int to start from the right to left
 * @ed: int to finish from the left to the right
 * @md: int
 * Return: 0 or 1
 */
int check_palindrome(char *s, int stt, int ed, int md)
{
	if ((stt == ed + 1 && md == 0) || (stt == ed && md != 0))
		return (1);
	else if (s[stt] != s[ed])
		return (0);
	else
		return (check_palindrome(s, stt + 1, ed - 1, md));
}
