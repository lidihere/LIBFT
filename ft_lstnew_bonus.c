/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidihere <lidihere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:36:10 by lidihere          #+#    #+#             */
/*   Updated: 2023/05/24 18:16:17 by lidihere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_l;

	new_l = (t_list *)malloc(sizeof(t_list));
	if (!new_l)
		return (NULL);
	new_l -> content = content;
	new_l -> next = NULL;
	return (new_l);
}
