/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:18:16 by nhwang            #+#    #+#             */
/*   Updated: 2021/09/27 21:37:06 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	answer;

	if (nb < 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	answer = nb * ft_recursive_power(nb, power - 1);
	return (answer);
}
