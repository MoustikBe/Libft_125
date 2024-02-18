/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:51:23 by misaac-c          #+#    #+#             */
/*   Updated: 2024/02/09 14:17:12 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

    if (!lst || !f || !del)
        return (NULL);
    while(lst != NULL)
    {
        ft_lstnew((*f)(lst->content));
        if (!ft_lstnew(lst->content))
            ft_lstdelone(lst, del);
        lst = lst->next;
    }
}
*/