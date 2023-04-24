#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int d)
{
	int	i;

	i = 0;
	while (d != '\0')
	{
		if ((d >= 'A' && d <= 'Z') || (d >= 'a' && d <= 'z') 
		|| (d >= '0' && d <= '9'))
		{
			i++;
		return (1);
		}
		else	
			return (0);
	}
return (0);	
}
