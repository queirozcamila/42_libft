/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqueiroz <cqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:07:25 by cqueiroz          #+#    #+#             */
/*   Updated: 2021/08/31 11:14:23 by cqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset (void *str, int c, size_t n)
{
	unsigned char *aux;
	size_t i;

	aux = (unsigned char *) str; //igualando os ponteiros, mesmo lugar na memoria
	i = 0;
	while( n > i)
	{
		aux[i] = (char) c;
		i++;
	}
	return(str);
}
