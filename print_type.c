/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:51:00 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 18:51:02 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_utils.h"

void	print_type(char arg_type)
{
	if (arg_type == 'd')
		ft_putstr_fd("--INT *--\n", 2);
	else if (arg_type == 'c')
		ft_putstr_fd("--CHAR *--\n", 2);
	else if (arg_type == 's')
		ft_putstr_fd("--CHAR **--\n", 2);
	else if (arg_type == 't')
		ft_putstr_fd("--INT **--\n", 2);
	else if (arg_type == 'e')
		ft_putstr_fd("--OTHER TYPE--\n", 2);
}
