/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 17:04:26 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 15:58:07 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t sizea;
	size_t sizeb;

	sizea = 0;
	sizeb = 0;
	sizea = ft_strlen(dst);
	sizeb = ft_strlen(src);
	if (size <= sizea)
		return (sizeb + size);
	i = 0;
	while (dst[i] && i < size - 1)
		i++;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (sizea + sizeb);
}
