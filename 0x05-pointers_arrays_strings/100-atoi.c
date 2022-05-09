/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted.
 * Return: a signed integer.
 */
int _atoi(char *s)
{
	int index = 0;
	unsigned int num = 0;
	int sign = 1;

	for (; s[index] < '0' || s[index] > '9'; index++)
		;

	if ((index - 1 >= 0) && s[index - 1] == '-')
		sign = -1;

	for (; s[index] >= '0' && s[index] <= '9'; index++)
		num = (num * 10) + (s[index] - '0');

	return (sign * num);
}
