#include <stdio.h>

char	*ft_strnstr(const char *large, const char *small, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (small[h] == '\0')
		return ((char *)large);
	while (large[h])
	{
		n = 0;
		while (large[h + n] == small[n] && (h + n) < len)
		{
			if (large[h + n] == '\0' && small[n] == '\0')
				return ((char *)large + h);
			n++;
		}
		if (small[n] == '\0')
			return ((char *)large + h);
		h++;
	}
	return (0);
}


