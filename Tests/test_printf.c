<Down>#include <stdio.h>
#include <unistd.h>
#include "_putchar.c"

int _printf(const char *format)
{
	int i = 0, j = 0, inicio = -1, fin = -1;
	char c = 10;
	char conversion[] = "csdi";
  
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			inicio = i;
			i++;
			if (format [i] == '%')
			{
				_putchar(format[i]);
				inicio = -1;
			}
			else
			{
				for (; format[i] ; i++)
				{
					for (j = 0; j < 4; j++)
					{
						if (format[i] == conversion[j] || format[i] == '\0')
						{
							fin = i;
							inicio += 1;
							inicio -= 1;
							break;
							/* intermedio("%d\n%d", inicio, fin); */
						}
					}
					if (fin != -1)
					{
						inicio = -1;
						fin = -1;
						break;
					}
				}
			}
		}
		else
			_putchar(format[i]);
	}
	_putchar(c);
	_putchar('h');
	return (0);
}

int main()
{
  char *formato1;
  formato1 = "Unknown:[%r]\n";
  _printf(formato1);
  return(0);
}
