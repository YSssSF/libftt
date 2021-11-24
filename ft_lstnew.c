/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:28:04 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/22 13:57:34 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cup;

	cup = (t_list *)malloc(sizeof(*cup));
	if (!cup)
		return (NULL);
	cup->content = content;
	cup->next = NULL;
	return (cup);
}
