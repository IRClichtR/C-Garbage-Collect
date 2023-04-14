/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_surint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:35:09 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 18:39:30 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_utils.h"

int	free_surint(int **tab)
{
	int	size;
	int	i;

	if (!tab)
		return (-1);
	size = sizeof(tab) / sizeof(int *);
	i = size;
	while (i >= 0)
	{
		free(tab[i]);
		tab[i] = 0;
		i--;
	}
	free(tab);
	tab = 0;
	return (size + 1);
}
