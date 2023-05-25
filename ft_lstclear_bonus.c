/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidihere <lidihere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:15:03 by lidihere          #+#    #+#             */
/*   Updated: 2023/05/24 18:24:01 by lidihere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*act;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		del((*lst)->content);
		act = *lst;
		*lst = act->next;
		free(act);
	}
	*lst = 0;
}
