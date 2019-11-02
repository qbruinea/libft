/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 14:30:20 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/27 14:31:30 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*ft_strcat(unsigned char *dst, unsigned char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

char					*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*str;
	size_t			tsize;

	if (!s1)
		return ((char*)s2);
	if (!s2)
		return ((char*)s1);
	tsize = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (unsigned char*)malloc(sizeof(*str) * tsize + 1)))
		return (0);
	str[0] = '\0';
	str = ft_strcat(str, (unsigned char*)s1);
	str = ft_strcat(str, (unsigned char*)s2);
	return ((char*)str);
}
