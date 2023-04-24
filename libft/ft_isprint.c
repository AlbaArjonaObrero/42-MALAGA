#include <ctype.h>
#include <stdio.h>

int ft_isprint(int d)
{
	int	i;

	i = 0;
	while ( d != '\0')
	{
		if (d >= 32 && d <= 126)
		{
			i++;
		return (1);
		}
		else	
			return (0);
	}
return (0);		
}
