
#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	a++;
	return (a);
}
