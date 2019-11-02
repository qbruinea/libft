/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 18:16:15 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 17:23:38 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	ctf;

	i = 0;
	ctf = ft_strlen(nee);
	a = 0;
	if (ctf == 0)
		return ((char*)hay);
	while (hay[i] && i < len)
	{
		while (nee[a] == hay[a + i] && a + i < len)
		{
			if (a == ctf - 1)
				return ((char*)hay + i);
			a++;
		}
		a = 0;
		i++;
	}
	return (0);
}
