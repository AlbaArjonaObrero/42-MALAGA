/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:54:34 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/24 10:54:35 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii (int c)
{
	if (c >= 0 &&c<= 127)
		return (1);
	return(0);
}

/*int main ()
{
	int c;

	c = 249;

	printf ("%d", ft_isascii(c));
	return (0);
}*/
