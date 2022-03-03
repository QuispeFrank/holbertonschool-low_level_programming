#include<stdlib.h>
/**
 * string_nconcat - function that concatenates 
 * two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: n bytes of s2
 * Return: return the pointer or NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0, lens = 0, i;
	char *ptr = NULL;
  
	/* condition s1 or s2 = NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	/* lenght of s1 and s2 */
	while (s1[lens1])
		lens1++;
	while (s2[lens2])
		lens2++;
	lens = lens1 + lens2;
	if(n < lens2)
		lens = lens1 + n;
	ptr = malloc(sizeof(char)*lens + 1);
	if (ptr == NULL)
		return (NULL);
	
	/*fill the allocation memory*/
	for (i= 0; i < lens1; i++)
		ptr[i] = s1[i];
	for (; i < lens; i++)
		ptr[i] = s2[i - lens1];
	ptr[i] = '\0';
	return (ptr);
}
