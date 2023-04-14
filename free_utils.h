/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:23:07 by ftuernal          #+#    #+#             */
/*   Updated: 2023/04/07 19:13:09 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_UTILS_H
# define FREE_UTILS_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

int		check_input(char *str);
int		free_arg(char arg, va_list args);
int		free_int(int *arg);
int		free_char(char *arg);
int		free_exotic(va_list args);
int		free_surint(int **arg);
int		free_surstr(char **arg);
int		free_void(void *arg);
int		free_whatever(char *ptr_types, ...);
void	print_type(char arg_type);

#endif
