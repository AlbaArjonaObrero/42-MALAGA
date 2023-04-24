#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int d)
{
	int	i;

	i = 0;
	while ( d != '\0')
	{
		if ((d >= 'A' && d <='Z') || (d >= 'a' && d <='z'))
		{
			i++;
		return (1);
		}
		else	
			return (0);
	}
return (0);		
}
