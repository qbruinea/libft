/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 17:46:07 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/27 14:31:30 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	while (ft_set((char)s1[i], (char*)set) == 1)
		i++;
	if ((char)s1[i] == '\0')
		ft_calloc(1, sizeof(char));
	j = i;
	while ((char)s1[j])
		j++;
	j--;
	while (ft_set((char)s1[j], (char*)set) == 1)
		j--;
	return (ft_substr((char*)s1, i, j - i + 1));
}
