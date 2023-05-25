/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidihere <lidihere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:20:06 by lidihere          #+#    #+#             */
/*   Updated: 2023/05/11 16:27:09 by lidihere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (s == NULL)
		return (0);
	if (ft_strlen(s) < start)
	{
		s2 = malloc(1);
		s2[0] = '\0';
		return (s2);
	}
	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	s2 = malloc(len + 1);
	if (s2 == NULL)
		return (0);
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}
