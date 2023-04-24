/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:55:27 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/24 10:55:29 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

/*int main(void)
{

    char str1[] = "Hola mundo";
    char str2[] = "m";
    char *result;

    result = ft_strnstr(str1, str2, 8);
	printf("%s", result);
	return(0);

    // Comprobación del resultado devuelto por la función ft_strnstr
    if (result == str1) // Si el resultado es igual al puntero al inicio de la cadena
        printf("La función ha devuelto el puntero al inicio de la cadena\n");
    else // Si el resultado no es igual al puntero al inicio de la cadena
        printf("La función NO ha devuelto el puntero al inicio de la cadena\n");
    // Salida del programa
    return (0);
}*/
