/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:58:00 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/21 16:58:00 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_error_handling(t_list_man *s_lman, int isargc)
{
		if (s_lman->a != NULL)
			free(s_lman->a);
		if (s_lman->ia != NULL)
			free(s_lman->ia);
		if (s_lman->b != NULL)
			free(s_lman->b);
		if (s_lman->ib != NULL)
			free(s_lman->ib);
	if (isargc == 0)
		free_array(s_lman, s_lman->a_s);
	ft_printf("Error\n");
	exit(0);
}

int	ft_int_memchr(t_list_man *list, int n, unsigned int a_s)
{
	unsigned int	counter;

	counter = 0;
	if (list->a == NULL)
		ft_printf("NULL\n");
	if (n == 0 && list->exist_zero == 0)
	{
		list->exist_zero = 1;
		return (0);
	}
	while (counter < a_s - 1)
	{
		if (list->a[counter] == n)
			return (-1);
		counter++;
	}
	return (0);
}

long int	ft_latoi(const char *nptr)
{
	long int	result;
	size_t		counter;
	int			is_neg;

	counter = 0;
	is_neg = 1;
	result = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == 45 || *nptr == 43)
	{
		if (*nptr == 45)
			is_neg = -1;
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		if (counter > 11)
			return (2147483650);
		result = result * 10 + ((*nptr) - 48);
		nptr++;
		counter++;
	}
	return (result * is_neg);
}

int	ft_check_chars(char current, char next)
{
	if (((ft_isdigit(current) == 0)
			&& (current != '-' && current != '+' && current != ' '))
		|| (current == '-' && next == '\0')
		|| (current == '-' && next == ' ')
		|| (current == '-' && next == '+')
		|| (current == '-' && next == '-')
		|| (current == '+' && next == '\0')
		|| (current == '+' && next == ' ')
		|| (current == '+' && next == '-')
		|| (current == '+' && next == '+'))
		return (0);
	return (1);
}

int	ft_check_isvalid(int cnt, char *argv[])
{
	long int	nl;
	int			cnt_c;

	cnt_c = 0;
	while (argv[cnt][cnt_c])
	{
		if (ft_check_chars(argv[cnt][cnt_c], argv[cnt][cnt_c + 1]) == 0)
			return (-1);
		cnt_c++;
	}
	nl = ft_latoi(argv[cnt]);
	if (nl > 2147483647 || nl < -2147483648)
		return (-1);
	return (1);
}
