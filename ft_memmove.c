/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidihere <lidihere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:21:55 by lidihere          #+#    #+#             */
/*   Updated: 2023/05/02 13:15:41 by lidihere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = 0;
	if (!src && !dst)
		return (dst);
	if (dst > src)
	{
		while (len--)
			a[len] = b[len];
	}
	else
	{
		while (i < len)
		{	
			a[i] = b[i];
			i++;
		}
	}
	return (dst);
}
/* 
int	main(void)
{
	char	str[] = "memmove";
	char	dst[] = "ooooooooooo";

	ft_memmove(dst, str, 4);
	printf("%s", dst);
	return (0);
} */