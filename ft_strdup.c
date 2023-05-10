/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidihere <lidihere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:14:53 by lidihere          #+#    #+#             */
/*   Updated: 2023/05/08 16:18:09 by lidihere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = malloc((ft_strlen(s1)+1) * sizeof(char));
	if (s2 == NULL)
		return (0);
	while (i <= (size_t)(ft_strlen(s1)))
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
