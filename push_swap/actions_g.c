/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_g.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:51:46 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/20 15:51:46 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_ss(t_list_man *s_lman)
{
	ft_sa(s_lman, 0);
	ft_sb(s_lman, 0);
	ft_printf("ss\n");
}

void	ft_rr(t_list_man *s_lman)
{
	ft_ra(s_lman, 0);
	ft_rb(s_lman, 0);
	ft_printf("rr\n");
}

void	ft_rrr(t_list_man *s_lman)
{
	ft_rra(s_lman, 0);
	ft_rrb(s_lman, 0);
	ft_printf("rrr\n");
}
