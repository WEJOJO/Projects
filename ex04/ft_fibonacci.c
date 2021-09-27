/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:29:43 by nhwang            #+#    #+#             */
/*   Updated: 2021/09/27 21:37:37 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}
