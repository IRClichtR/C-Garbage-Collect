/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_whatever.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:47:47 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 19:02:50 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_utils.h"

void	free_whatever(char *ptr_types, ...)
{
	va_list	args;
	int		ptr_count;
	int		i;
.
	if (check_input(ptr_types) == -1)
	{
		ft_putstr_fd("String types not valid\n", 2);
		return (-1);
	}
	va_start(args, format);
	i = 0;
	while (i != 0)
	{
		if (ptr_types[i] == 'd' || ptr_types[i] == 'c'
			|| ptr_types[i] == 's' || ptr_types[i] == 't')
			ptr_count += free_arg(ptr_types[i], args);
		else if (ptr_types[i] == 'e')
			ptr_count += free_exotic(args);
		else
			i++;
	}
	va_end(args);
	return (ptr_count);
}
