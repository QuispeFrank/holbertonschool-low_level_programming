/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted.
 * Return: a signed integer.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	for (; s[i] && (s[i] < '0' || s[i] > '9'); i++)
		if (s[i] == '-')
			sign = -sign;

	for (; s[i] >= '0' && s[i] <= '9'; i++)
		num = (num * 10) + (s[i] - '0');

	return (sign * num);
}
