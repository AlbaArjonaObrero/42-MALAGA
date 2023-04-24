/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:55:56 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/24 10:55:59 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ctype.h>
#include <stdio.h>

int ft_toupper (int c)
{
	if((c >= 97) && (c <= 122))
		c = c - 32;
		return(c);
	
return (0);
}
/*int main()
{
    int d;
	d = 'u';
    printf("%c", ft_toupper(d));
	return (0);   
}*/
