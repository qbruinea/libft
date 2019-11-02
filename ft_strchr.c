/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 17:12:06 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 13:09:03 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*st;
	int		i;

	st = (char *)s;
	i = 0;
	while (st[i])
	{
		if (st[i] == c)
			return (&st[i]);
		i++;
	}
	if (st[i] == c)
		return (&st[i]);
	return (NULL);
}
