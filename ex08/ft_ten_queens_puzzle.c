/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:34:11 by nhwang            #+#    #+#             */
/*   Updated: 2021/09/27 21:51:34 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

static int	g_qcnt = 0;

int	ft_qcheck(int *qarr, int y, int x)
{
	int	i;
	int	absy;
	int	absx;

	i = 0;
	while (i < x)
	{
		if ((qarr[i] - y) < 0)
			absy = -(qarr[i] - y);
		else
			absy = (qarr[i] - y);
		if (i - x < 0)
			absx = -(i - x);
		else
			absx = i - x;
		if (absx == absy)
			return (0);
		if (qarr[i] == y)
			return (0);
		i++;
	}
	return (1);
}

void	ft_makearr(int *qarr)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		qarr[i] = 0;
		i++;
	}
}

void	ft_printarr(int *qarr)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = (char) qarr[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_travelqueen(int *qarr, int x)
{
	int	j;

	j = 0;
	if (x == 10)
	{
		g_qcnt++;
		ft_printarr(qarr);
		return (1);
	}
	while (j < 10)
	{
		qarr[x] = j;
		if (ft_qcheck(qarr, j, x))
			ft_travelqueen(qarr, x + 1);
		j++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	qarr[10];
	int	qcnt;

	qcnt = 0;
	ft_makearr(qarr);
	ft_travelqueen(qarr, 0);
	return (g_qcnt);
}
