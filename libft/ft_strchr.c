/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:01:14 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/19 17:01:16 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*
** La función ft_strrchr busca la última aparición de un carácter en una cadena.
** Si encuentra el carácter, devuelve un puntero al carácter encontrado.
** Si no encuentra el carácter, devuelve un puntero nulo (NULL).
**
** str: cadena de caracteres en la que buscar el carácter.
** c: carácter a buscar.
*/

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

/*int main (void)
{
	char str[] = "Hola Mundo";
	char d = 'o';
	char *ptr = ft_strrchr(str, d);
	printf ("%ld\n", ptr - str);
	return (0);
}*/