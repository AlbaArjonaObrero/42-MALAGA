/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:54:10 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/24 10:54:13 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int d)
{
	int	i;

	i = 0;
	while (d != '\0')
	{
		if ((d >= 'A' && d <= 'Z') || (d >= 'a' && d <= 'z') 
		|| (d >= '0' && d <= '9'))
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
	d = 'o';
    printf("%d", ft_isalnum(d));
	return (0);   
}*/
