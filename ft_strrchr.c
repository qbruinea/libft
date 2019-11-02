/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 17:55:13 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 13:09:05 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	int		i;

	st = (char *)s;
	i = 0;
	while (st[i])
		i++;
	while (i >= 0)
	{
		if (st[i] == c)
			return (&st[i]);
		i--;
	}
	return (NULL);
}
