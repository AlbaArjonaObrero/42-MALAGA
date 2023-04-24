/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:54:47 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/24 10:54:49 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int d)
{
	int	i;

	i = 0;
	while ( d != '\0')
	{
		if (d >= '0' && d <='9')
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
	d = '5';
    printf("%d", ft_isdigit(d));
	return (0);   
}*/
