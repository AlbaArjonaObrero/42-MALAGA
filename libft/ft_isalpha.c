/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarjona <alarjona@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:30:02 by alarjona          #+#    #+#             */
/*   Updated: 2023/04/18 17:30:08 by alarjona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int d)
{
	int	i;

	i = 0;
	while ( d != '\0')
	{
		if ((d >= 'A' && d <='Z') || (d >= 'a' && d <='z'))
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
	d = '\0';
    printf("%d", ft_isalpha(d));
	return (0);   
}*/
