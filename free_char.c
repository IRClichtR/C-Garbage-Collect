/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:41:07 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 18:41:09 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_utils.h"

int	free(char *str)
{
	if (!str)
		return (-1);
	free(str);
	str = NULL;
}
