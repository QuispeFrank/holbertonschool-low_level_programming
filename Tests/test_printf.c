#include <stdio.h>
#include <unistd.h>
#include "_putchar.c"

int _printf(const char *format)
{
	int i = 0, j = 0, inicio = -1, fin = -1;
	char c = 10;
	char conversion[] = "csdi";

	/* testeo de la cadena principal */
	for (i = 0; format[i]; i++)
	{
		/* busqueda de un % */ 
		if (format[i] == '%')
		{
			inicio = i;
			i++;
			/* busqueda de %% (doble percent) */
			if (format [i] == '%')
			{
				_putchar(format[i]);
				inicio = -1;
			}
			else
			{
				/* busqueda de caracteres de conversion */
				for (; format[i] ; i++)
				{
					for (j = 0; j < 4; j++)
					{
						if (format[i] == conversion[j] || format[i + 1] == '\0')
						{
							fin = i;
							/* ejecuto la funcion intermedia */
							_putchar('_');
							_putchar('i');
							_putchar('n');
							_putchar('t');
							_putchar('e');
							_putchar('r');
							_putchar('m');
							_putchar('e');
							_putchar('d');
							_putchar('i');
							_putchar('a');
							_putchar('_');

							inicio += 1;
							inicio -= 1;
							break;							
						}
					}
					/* reinicio de variables y repite el ciclo */
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
/*	_putchar(c);*/
	return (0);
}

int main()
{
  char *formato1;
  formato1 = "Unk%dnow%in:[%r]%d@\\n@@@\n";
  _printf(formato1);
  return(0);
}
