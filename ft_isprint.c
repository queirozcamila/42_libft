/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqueiroz <cqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:05:21 by cqueiroz          #+#    #+#             */
/*   Updated: 2021/08/25 17:17:07 by cqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	return(c >=32 && c <= 126)
}