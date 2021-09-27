/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:19:09 by nhwang            #+#    #+#             */
/*   Updated: 2021/09/27 21:38:08 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrtbool(int n, int m)
{
	int	k;

	k = 0;
	if ((m * m) < n)
		k = sqrtbool(n, m + 1);
	else if (m * m > n)
		return (0);
	else
		return (m);
	return (k);
}

int	ft_sqrt(int nb)
{
	int	n;

	if (nb <= 0)
		return (0);
	n = sqrtbool(nb, 1);
	return (n);
}
