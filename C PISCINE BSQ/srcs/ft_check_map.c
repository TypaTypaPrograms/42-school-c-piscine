/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:01:10 by efrancis          #+#    #+#             */
/*   Updated: 2023/12/03 16:01:19 by efrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_check_map_line_len(char **array_map)
{
	int	i;
	int	j;
	int	line_len;
	int	diff_len;

	i = 0;
	j = 0;
	line_len = 0;
	diff_len = 0;
	array_map++;
	while (array_map[i])
	{
		j = ft_strprintable_len(array_map[i]);
		if (line_len != j)
			diff_len++;
		line_len = j;
		j = 0;
		i++;
	}
	if (diff_len > 1)
		return (0);
	return (1);
}

int	ft_check_map_line_value(char **array_map, t_map map)
{
	int	i;
	int	j;
	int	line_count;

	i = 0;
	j = 0;
	line_count = ft_atoi(array_map[0]);
	array_map++;
	while (array_map[i])
	{
		while (ft_is_printable(array_map[i][j]))
		{
			if ((array_map[i][j] != map.empty && array_map[i][j] != map.obs))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	if (line_count != i)
		return (0);
	return (1);
}

int	ft_is_map_valid(char **array_map, t_map map)
{
	if (!ft_check_map_line_len(array_map)
		|| !ft_check_map_line_value(array_map, map))
		return (0);
	return (1);
}
