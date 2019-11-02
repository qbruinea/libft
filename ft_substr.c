/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 17:16:09 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/27 14:40:28 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) <= start || len == 0)
		return (ft_calloc(sizeof(char), 1));
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
