/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:55:39 by nhwang            #+#    #+#             */
/*   Updated: 2021/09/27 21:35:29 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	answer;

	answer = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	answer = nb * ft_recursive_factorial(nb - 1);
	return (answer);
}
