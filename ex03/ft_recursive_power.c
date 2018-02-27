/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 11:55:03 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/12 12:42:43 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int n, int p)
{
	int cpy;

	cpy = n;
	if (p > 0)
	{
		n = cpy * ft_recursive_power(cpy, p - 1);
	}
	else if (p == 0)
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
