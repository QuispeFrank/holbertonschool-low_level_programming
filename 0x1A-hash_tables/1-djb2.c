/**
 * hash_djb2 - hash function implementing the djb2 algorithm.
 * @str: the string to be hashed.
 *
 * Return: the hash code.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* 5381 */
	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
