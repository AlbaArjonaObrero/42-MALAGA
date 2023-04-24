/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:55:00 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/24 10:55:02 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ctype.h>
#include <stdio.h>

int ft_isprint(int d)
{
	int	i;

	i = 0;
	while ( d != '\0')
	{
		if (d >= 32 && d <= 126)
		{
			i++;
		return (1);
		}
		else	
			return (0);
	}
return (0);		
}

/*int main()
{
    int d;
	d = '¨';
    printf("%d", ft_isprint(d));
	return (0);   
}*/
