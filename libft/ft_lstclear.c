/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:35:47 by misaac-c          #+#    #+#             */
/*   Updated: 2024/02/08 18:51:55 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!(*lst) || !lst || !del)
		return ;
	ft_lstclear(&(*lst)->next, del);
	del(&(*lst)->content);
	free(&(*lst)->content);
	*lst = NULL;
}
