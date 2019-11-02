/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 15:20:20 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 12:53:59 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*stf;

	i = 0;
	if (src == NULL && dst == NULL && n != 0)
		return (NULL);
	str = (unsigned char *)src;
	stf = (unsigned char *)dst;
	while (i < n)
	{
		stf[i] = str[i];
		i++;
	}
	dst = stf;
	return (dst);
}
