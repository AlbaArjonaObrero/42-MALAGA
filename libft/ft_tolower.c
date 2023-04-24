/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:55:45 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/24 10:55:47 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ctype.h>
#include <stdio.h>

int ft_tolower (int c)
{
	if((c >= 65) && (c <= 90))
		c = c + 32;
		return(c);
	
return (0);
}
/*int main()
{
    int d;
	d = 'D';
    printf("%c", ft_tolower(d));
	return (0);   
}*/
