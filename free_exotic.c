/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exotic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:57:05 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 18:59:35 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_utils.h"

int	free_exotic(va_list *arg)
{
	void	*ptr;

	if (!arg)
		return (-1);
	ptr = va_arg(args, void *);
	free(ptr);
	ptr = 0;
	return (1);
}
