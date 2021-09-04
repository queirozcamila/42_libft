/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqueiroz <cqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:52:43 by cqueiroz          #+#    #+#             */
/*   Updated: 2021/09/04 15:14:18 by cqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *us;

	us = (unsigned char *)s;
	if (s == 0)
		return (0);
	while (n > 0)
	{
		if(*us == c)
		{
			return ((void *)s);
		}
		n--;
		s++;
		us++;
	}
	return (0);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'l';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));
   printf("String after |%c| is - \n %s \n", ch, ret);
   return(0);
}
