/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:12:40 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 19:12:42 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_utils.h"

static int	is_type(char c)
{
	char	*types;

	types = "dcste";
	while (*types != 0)
		if (c == *types)
			return (1);
	return (-1);
}

int	check_input(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (is_type(str[i] == -1 || str[i] != ' ')
			return (-1);
		i++;
	}
	return (1);
}
