/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:30:28 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/12 22:09:10 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					s;
	long unsigned int	r;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		if (r > 9223372036854775807 && s == 1)
			return (-1);
		else if (r > 9223372036854775807 && s == -1)
			return (0);
		i++;
	}
	return (s * r);
}
/*
int main()
{
	printf("%d\n", atoi("-9223372036854775806"));
	printf("%d", ft_atoi("-9223372036854775806"));
}*/
