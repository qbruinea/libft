/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 16:06:14 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 14:24:27 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (str[i] == (unsigned char)c)
			return ((void *)&stf[i + 1]);
		i++;
	}
	return (NULL);
}
