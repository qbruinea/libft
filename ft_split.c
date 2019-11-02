/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 15:42:15 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/27 14:59:41 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_issep(char c, char charset)
{
	if (c == charset)
		return (1);
	if (c == '\0')
		return (1);
	return (0);
}

static void		ft_catsplit(char *dest, const char *src, char charset)
{
	int i;

	i = 0;
	while (ft_issep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static void		ft_free(char **tab, int i)
{
	while (--i > 0)
		free(tab[i]);
	free(tab);
}

static int		ft_fullsplit(char **split, const char *str, char charset)
{
	int i;
	int j;
	int mot;

	i = 0;
	mot = 0;
	while (str[i] != '\0')
	{
		if (ft_issep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_issep(str[i + j], charset) == 0)
				j++;
			if (!(split[mot] = (char*)malloc(sizeof(char) * (j + 1))))
			{
				ft_free(split, mot);
				return (0);
			}
			ft_catsplit(split[mot++], str + i, charset);
			i = i + j;
		}
	}
	return (1);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		nbmot;
	int		i;

	if (!s)
		return (ft_calloc(1, sizeof(char)));
	nbmot = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_issep(s[i + 1], c) == 1 &&
			ft_issep(s[i], c) == 0)
			nbmot++;
		i++;
	}
	if (!(tab = (char**)malloc(sizeof(char*) * (nbmot + 1))))
		return (NULL);
	if (ft_fullsplit(tab, s, c) == 0)
		return (NULL);
	tab[nbmot] = 0;
	return (tab);
}
