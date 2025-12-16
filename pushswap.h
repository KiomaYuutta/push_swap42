/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:08:32 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/19 23:08:32 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "ft_printf/ft_printf.h"

typedef struct s_lman
{
	unsigned int	a_s;
	unsigned int	b_s;
	unsigned int	mb;
	unsigned int	m_size;
	char			**input;
	int				*a;
	int				*b;
	int				*ia;
	int				*ib;
}	t_list_man;

void	ft_mover(int *dest, int *src, unsigned int list_size);
void	ft_movel(int *dest, int *src, unsigned int list_size);
void	ft_error_handling(int *a);
void	ft_sort_start(t_list_man *s_list_man);
void	ft_sort_3(t_list_man *s_lman);
void	ft_sort_4(t_list_man *s_lman);
void	ft_sort_5(t_list_man *s_lman);
void	ft_sort_big(t_list_man *s_lman);
void	ft_sa(t_list_man *s_lman);
void	ft_pa(t_list_man *s_lman);
void	ft_ra(t_list_man *s_lman);
void	ft_rra(t_list_man *s_lman);
void	ft_sb(t_list_man *s_lman);
void	ft_pb(t_list_man *s_lman);
void	ft_rb(t_list_man *s_lman);
void	ft_rrb(t_list_man *s_lman);
void	ft_ss(t_list_man *s_lman);
void	ft_rr(t_list_man *s_lman);
void	ft_rrr(t_list_man *s_lman);
void	ft_sort_a(t_list_man *s_lman, int bit_c);
void	ft_sort_b(t_list_man *s_lman, int bit_c);
void	ft_int_bzero(int *l, unsigned int n);
void	ft_set_index(t_list_man *s_lman);
int		ft_check_isvalid(int cnt, char *argv[]);
int		ft_int_memchr(int *a, int n, int argc);
int		ft_issorted(t_list_man *s_lman, char list);
int		ft_detect_min(t_list_man *s_lman);
int		ft_detect_secondmin(t_list_man *s_lman, int min);
int		ft_cnt_i(char **input);
#endif