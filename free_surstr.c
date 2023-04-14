/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_surstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:30:45 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 18:38:59 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_utils.h"

static int	surstrlen(char **str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	free_surstr(char **arg)
{
	int	len;
	int	ptr_count;

	if (!arg)
		return (-1);
	len = surstrlen(arg);
	ptr_count = len + 1;
	while (len >= 0)
	{
		if (arg[len])
			free(arg[len]);
		arg[len] = NULL;
		len--;
	}
	free(arg);
	arg = NULL;
	ptr_count += 1;
	return (ptr_count);
}
