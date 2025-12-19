/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:06:57 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/25 23:06:57 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_mover(int *dest, int *src, unsigned int list_size)
{
	while (list_size > 0)
	{
		(dest[list_size]) = src[list_size - 1];
		list_size--;
	}
}

void	ft_movel(int *dest, int *src, unsigned int list_size)
{
	unsigned int	cnt;

	cnt = 0;
	while (cnt < list_size - 1)
	{
		(dest[cnt]) = src[cnt + 1];
		cnt++;
	}
}
