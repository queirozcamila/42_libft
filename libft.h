/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqueiroz <cqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:32:02 by cqueiroz          #+#    #+#             */
/*   Updated: 2021/08/31 15:14:58 by cqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//o ifndef verifica se não houve definição essa variavel global anteriormente
#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*memset(void *str, int c, size_t n);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
