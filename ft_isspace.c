/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyenyi- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 00:42:14 by oyenyi-           #+#    #+#             */
/*   Updated: 2018/06/05 23:48:22 by oyenyi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if ((c == ' ' || c == '\t' || c == '\v' ||
				c == '\n' || c == '\f' || c == 'r'))
		return (1);
	return (0);
}
