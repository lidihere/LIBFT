/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidihere <lidihere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:57:41 by lidihere          #+#    #+#             */
/*   Updated: 2023/05/02 14:03:49 by lidihere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	i = 0;
	a = (char *)dst;
	b = (char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
/* 
int	main(void)
{
	char	src[] = "memcpy";
	char	dst[] = "jejeje";
	
	ft_memcpy(dst, src, 6);
	printf("%s", dst);
	return (0);
} */