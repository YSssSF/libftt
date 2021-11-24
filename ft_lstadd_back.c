/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:49:24 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/22 18:44:23 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cup;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			cup = ft_lstlast(*(lst));
			cup->next = new;
		}
	}
}
