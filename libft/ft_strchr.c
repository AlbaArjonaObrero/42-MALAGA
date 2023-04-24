
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strrchr(const char *str, int c)
{

	int longitud;
	int flag;
	
	flag = 0;longitud = ft_strlen(str);
	while (longitud >= 0 && flag == 0)
	{
		if (str[longitud] == c)
		{
			return ((char*)&str[longitud]);
			flag = 1;
		}
		longitud--;
	}
	return (NULL);
}
