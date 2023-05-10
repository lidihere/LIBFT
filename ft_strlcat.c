/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidihere <lidihere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:26:16 by lidihere          #+#    #+#             */
/*   Updated: 2023/05/02 13:42:16 by lidihere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	char	*punt;

	x = 0;
	y = 0;
	punt = (char *)src;
	while (dst[x] != '\0' && x < dstsize)
		x++;
	while (punt[y] != '\0' && (x + y + 1) < dstsize)
	{
		dst[x + y] = punt[y];
		y++;
	}
	if (x < dstsize)
	{
		dst[x + y] = '\0';
	}
	return (ft_strlen(punt) + x);
}
