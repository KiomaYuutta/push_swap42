/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 22:57:31 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/15 22:57:31 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sa(t_list_man *s_lman, int print_m)
{
	int	temp;
	int	temp_i;

	if (s_lman->a_s < 1)
		return ;
	temp = s_lman->a[0];
	temp_i = s_lman->ia[0];
	s_lman->a[0] = s_lman->a[1];
	s_lman->ia[0] = s_lman->ia[1];
	s_lman->a[1] = temp;
	s_lman->ia[1] = temp_i;
	if (print_m == 1)
		ft_printf("sa\n");
}

void	ft_pa(t_list_man *s_lman)
{
	if (s_lman->b_s == 0)
		return ;
	ft_mover(s_lman->a, s_lman->a, s_lman->a_s);
	ft_mover(s_lman->ia, s_lman->ia, s_lman->a_s);
	s_lman->a[0] = s_lman->b[0];
	s_lman->ia[0] = s_lman->ib[0];
	ft_movel(s_lman->b, s_lman->b, s_lman->b_s);
	ft_movel(s_lman->ib, s_lman->ib, s_lman->b_s);
	(s_lman->a_s)++;
	(s_lman->b_s)--;
	s_lman->b[s_lman->b_s] = 0;
	s_lman->ib[s_lman->b_s] = 0;
	ft_printf("pa\n");
}

void	ft_ra(t_list_man *s_lman, int print_m)
{
	unsigned int	cnt;
	int				temp;
	int				temp_i;

	if (s_lman->a_s < 1)
		return ;
	cnt = 0;
	temp = s_lman->a[0];
	temp_i = s_lman->ia[0];
	while (cnt < s_lman->a_s - 1)
	{
		s_lman->a[cnt] = s_lman->a[cnt + 1];
		s_lman->ia[cnt] = s_lman->ia[cnt + 1];
		cnt++;
	}
	s_lman->a[cnt] = temp;
	s_lman->ia[cnt] = temp_i;
	if (print_m == 1)
		ft_printf("ra\n");
}

void	ft_rra(t_list_man *s_lman, int print_m)
{
	unsigned int	cnt;
	int				temp;
	int				temp_i;

	if (s_lman->a_s < 1)
		return ;
	cnt = s_lman->a_s - 1;
	temp = s_lman->a[s_lman->a_s - 1];
	temp_i = s_lman->ia[s_lman->a_s - 1];
	while (cnt > 0)
	{
		s_lman->a[cnt] = s_lman->a[cnt - 1];
		s_lman->ia[cnt] = s_lman->ia[cnt - 1];
		cnt--;
	}
	s_lman->a[cnt] = temp;
	s_lman->ia[cnt] = temp_i;
	if (print_m == 1)
		ft_printf("rra\n");
}
