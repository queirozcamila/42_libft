/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqueiroz <cqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:04:45 by cqueiroz          #+#    #+#             */
/*   Updated: 2021/09/03 10:44:52 by cqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*us1 > *us2)
			return (1);
		else if (*us1 < *us2)
			return (-1);
		us1++;
		us2++;
		n--;
	}
	return (0);
}
