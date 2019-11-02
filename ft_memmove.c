/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 16:22:48 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/25 14:17:53 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*stf;

	if (src == NULL && dst == NULL && len != 0)
		return (NULL);
	i = 0;
	str = (unsigned char*)src;
	stf = (unsigned char*)dst;
	if (stf > str)
	{
		while (i < len)
		{
			stf[len - 1] = str[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(stf, src, len);
	return (dst);
}
