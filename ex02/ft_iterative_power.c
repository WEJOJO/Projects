/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:18:20 by nhwang            #+#    #+#             */
/*   Updated: 2021/09/27 21:37:10 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	answer;

	if (nb < 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	answer = nb * ft_iterative_power(nb, power - 1);
	return (answer);
}
