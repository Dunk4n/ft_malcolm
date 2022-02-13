/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:48:28 by niduches          #+#    #+#             */
/*   Updated: 2019/12/01 22:14:23 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int nb, int p)
{
	long lnb;

	lnb = 0;
	if (p == 0)
		return (1);
	if (p < 0 || nb == 0)
		return (0);
	lnb = ft_pow(nb, p - 1);
	lnb *= nb;
	if (lnb > 2147483647)
		return (0);
	if (lnb < -2147483648)
		return (0);
	return (lnb);
}