/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 19:17:42 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/22 19:17:42 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/* void	ft_mover(int *dest, int *src, unsigned int list_size)
{
	while (list_size > 0)
	{
		(dest[list_size]) = src[list_size - 1];
		list_size--;
	}
}

void	ft_movel(int *dest, int *src, unsigned int list_size)
{
	int	cnt;

	cnt = 0;
	while (cnt < list_size - 1)
	{
		(dest[cnt]) = src[cnt + 1];
		cnt++;
	}
}
void	ft_sb(int *b, unsigned int *b_size)
{
	int	temp;

	if (*b == 1)
		return ;
	temp = b[0];
	b[0] = b[1];
	b[1] = temp;
}
void	ft_sa(int *a, unsigned int *a_size)
{
	int	temp;

	if (*a_size == 1)
		return ;
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}
void	ft_pb(int *b, int *a, unsigned int *b_size, unsigned int *a_size)
{
	if (*a_size == 0)
		return ;
	ft_mover(b, b, *b_size);
	b[0] = a[0];
	ft_movel(a, a, *a_size);
	(*b_size)++;
	(*a_size)--;
	a[*a_size] = 0;
}

void	ft_pa(int *a, int *b, unsigned int *a_size, unsigned int *b_size)
{
	if (*b_size == 0)
		return ;
	ft_mover(a, a, *a_size);
	a[0] = b[0];
	ft_movel(b, b, *b_size);
	(*a_size)++;
	(*b_size)--;
	b[*b_size] = 0;
}
void	ft_rb(int *b, unsigned int *b_size)
{
	int	temp;
	int	cnt;

	if (b_size < 1)
		return ;
	cnt = 0;
	temp = b[0];
	while (cnt < *b_size - 1)
	{
		b[cnt] = b[cnt + 1];
		cnt++;
	}
	b[cnt] = temp;
}
void	ft_ra(int *a, unsigned int *a_size)
{
	int	temp;
	int	cnt;

	if (a_size < 1)
		return ;
	cnt = 0;
	temp = a[0];
	while (cnt < *a_size - 1)
	{
		a[cnt] = a[cnt + 1];
		cnt++;
	}
	a[cnt] = temp;
}
void	ft_rrb(int *b, unsigned int *b_size)
{
	int	temp;
	unsigned int	cnt;

	if (b_size < 1)
		return ;
	cnt = *b_size - 1;
	temp = b[*b_size - 1];
	while (cnt > 0)
	{
		b[cnt] = b[cnt - 1];
		cnt--;
	}
	b[cnt] = temp;
}
void	ft_rra(int *a, unsigned int *a_size)
{
	int	temp;
	unsigned int	cnt;

	if (a_size < 1)
		return ;
	cnt = *a_size - 1;
	temp = a[*a_size - 1];
	while (cnt > 0)
	{
		a[cnt] = a[cnt - 1];
		cnt--;
	}
	a[cnt] = temp;
}
void	ft_ss(int *a, int *b, unsigned int *a_size, unsigned int *b_size)
{
	ft_sa(a, a_size);
	ft_sb(b, b_size);
}
void	ft_rr(int *a, int *b, unsigned int *a_size, unsigned int *b_size)
{
	ft_ra(a, a_size);
	ft_rb(b, b_size);
}
void	ft_rrr(int *a, int *b, unsigned int *a_size, unsigned int *b_size)
{
	ft_rra(a, a_size);
	ft_rrb(b, b_size);
}

int	main(void)
{
	static t_list_man	s_list_man;

	s_list_man.a = (int *)malloc(sizeof (int) * 6);
	s_list_man.b = (int *)malloc(sizeof (int) * 6);
	s_list_man.a_size = 6;
	s_list_man.b_size = 0;
	int	cnt;

	cnt = 0;
	s_list_man.a[0] = 1;s_list_man.a[1] = 2;s_list_man.a[2] = 3;s_list_man.a[3] = 4;s_list_man.a[4] = 5;s_list_man.a[5] = 6;
	s_list_man.b[0] = 0;s_list_man.b[1] = 0;s_list_man.b[2] = 0;s_list_man.b[3] = 0;s_list_man.b[4] = 0;s_list_man.b[5] = 0;
	ft_printf("A Before: %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
	ft_printf("B Before: %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
	ft_printf("\n");
	ft_printf("Push B\n");
	while (cnt != 6)
	{
		ft_pb(s_list_man.b, s_list_man.a, &(s_list_man.b_size), &(s_list_man.a_size));
		ft_printf("A After:  %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
		ft_printf("B After:  %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
		cnt++;
	}
	cnt = 0;
	ft_printf("\n\n");
	ft_printf("Push A\n");
	while (cnt != 3)
	{
		ft_pa(s_list_man.a, s_list_man.b, &(s_list_man.a_size), &(s_list_man.b_size));
		ft_printf("A After:  %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
		ft_printf("B After:  %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
		cnt++;
	}
	cnt = 0;
	ft_printf("\n\n");
	ft_printf("Swap A and Swap B\n");
	while (cnt != 3)
	{
		ft_sa(s_list_man.a, &(s_list_man.a_size));
		ft_sb(s_list_man.b, &(s_list_man.b_size));
		ft_printf("A After:  %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
		ft_printf("B After:  %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
		cnt++;
	}
	cnt = 0;
	ft_printf("\n\n");
	ft_printf("Rotate A and Rotate B\n");
	while (cnt != 2)
	{
		ft_ra(s_list_man.a, &(s_list_man.a_size));
		ft_rb(s_list_man.b, &(s_list_man.b_size));
		ft_printf("A After:  %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
		ft_printf("B After:  %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
		cnt++;
	}
	cnt = 0;
	ft_printf("\n\n");
	ft_printf("Reverse Rotate A and Reverse Rotate B\n");
	while (cnt != 2)
	{
		ft_rra(s_list_man.a, &(s_list_man.a_size));
		ft_rrb(s_list_man.b, &(s_list_man.b_size));
		ft_printf("A After:  %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
		ft_printf("B After:  %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
		cnt++;
	}
	cnt = 0;
	ft_printf("\n\n");
	ft_printf("Swap A and B\n");
	while (cnt != 5)
	{
		ft_ss(s_list_man.a, s_list_man.b, &(s_list_man.a_size), &(s_list_man.b_size));
		ft_printf("A After:  %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
		ft_printf("B After:  %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
		cnt++;
	}
	cnt = 0;
	ft_printf("\n\n");
	ft_printf("Rotate A and B\n");
	while (cnt != 3)
	{
		ft_rr(s_list_man.a, s_list_man.b, &(s_list_man.a_size), &(s_list_man.b_size));
		ft_printf("A After:  %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
		ft_printf("B After:  %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
		cnt++;
	}
	cnt = 0;
	ft_printf("\n\n");
	ft_printf("Reverse Rotate A and B\n");
	while (cnt != 3)
	{
		ft_rrr(s_list_man.a, s_list_man.b, &(s_list_man.a_size), &(s_list_man.b_size));
		ft_printf("A After:  %d/%d/%d/%d/%d/%d a_size: %d\n", s_list_man.a[0], s_list_man.a[1], s_list_man.a[2], s_list_man.a[3], s_list_man.a[4], s_list_man.a[5], s_list_man.a_size);
		ft_printf("B After:  %d/%d/%d/%d/%d/%d b_size: %d\n", s_list_man.b[0], s_list_man.b[1], s_list_man.b[2], s_list_man.b[3], s_list_man.b[4], s_list_man.b[5], s_list_man.b_size);
		cnt++;
	}
} */