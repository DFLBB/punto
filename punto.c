/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   punto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:48:20 by samartin          #+#    #+#             */
/*   Updated: 2022/12/15 11:22:05 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	num;

	sign = 1;
	num = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (num > 9223372036854775807 && sign == 1)
		return (-1);
	else if (num > 9223372036854775807 && sign == -1)
		return (0);
	return (sign * num);
}

static int	punto(int i)
{
	while (i--)
		write(1, ".", 1);
	return (56);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		i = argc;
	else
		i = ft_atoi(argv[1]);
	punto(i);
	return (0);
}