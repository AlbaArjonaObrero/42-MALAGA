/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:21:16 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/24 12:21:17 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <string.h>
 #include <stdio.h>
//str va a  ser la cadena original que se va a recorrer, y s 
//se iguala a s que es el puntero vacío que se va a rellenar. 
//Entonces lo que pasa es q la original esta igualda al puntero, se recorre la original y mientras no 
//supere el nºde bytes que hemos puesto, se iguala a c, que es el reemplazo q queremos. 
//igualar la original al puntero nos permite hacer estos cambios en la original, segun el n que demos
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*int main ()
{
	char s[10] = "Hola";
	int c = 'a';
	printf("%s", ft_memset(s,c, 2));
}*/


