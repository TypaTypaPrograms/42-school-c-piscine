/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:03:08 by efrancis          #+#    #+#             */
/*   Updated: 2023/12/03 16:03:14 by efrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	if (c >= 'A' && c >= 'Z')
		return (1);
	return (ft_is_number(c));
}

int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}
