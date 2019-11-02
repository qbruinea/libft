/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qbruinea <qbruinea@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 18:46:51 by qbruinea     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/27 14:43:47 by qbruinea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		nbr_len(int nb)
{
	int		len;
	long	nbr;

	len = 0;
	nbr = nb;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		len++;
		nbr = nbr / 10;
	}
	len++;
	return (len);
}

char			*ft_itoa(int n)
{
	int		size;
	char	*tab;
	long	nb;

	nb = n;
	size = nbr_len(n);
	if (!(tab = (char*)malloc(sizeof(*tab) * (size + 1))))
		return (0);
	if (nb < 0)
		nb = -nb;
	tab[size--] = '\0';
	while (nb >= 10)
	{
		tab[size--] = nb % 10 + 48;
		nb = nb / 10;
	}
	tab[size] = nb + 48;
	if ((long)n < 0)
		tab[--size] = '-';
	return (tab);
}
