/**
 * wildcmp - Compare two strings
 * @s1: String num 1
 * @s2: String num 2
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}
