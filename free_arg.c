/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:43:06 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 19:00:37 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_utils.h"

int		free_arg(char arg, va_list args)
{
	int	ptr_count;

	ptr_count = 0;
	if (ptr_types[i] == 'd')
		ptr_count += free_int(va_arg(args, int *));
	else if (ptr_types[i] == 'c')
		ptr_count += free_str(va_arg(args, char *));
	else if (ptr_types[i] == 's')
		ptr_count += free_surstr(va_arg(args, char **));
	else if (ptr_types[i] == 't')
		ptr_count += free_surint(va_arg(args, int **));
	if (ptr_count == -1)
	{
		ft_putstr_fd("something went wrong freeing a pointer\n", 2);
		print_type(arg, 2);
	}
	return (-1);
}

