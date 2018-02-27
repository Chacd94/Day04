/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:36:33 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/13 13:53:21 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int n)
{
	int i;
	int p;

	i = 2;
	p = 1;
	while (n % i != 0)
	{
		p++;
		i = 2 * p + 1;
	}
	if (i == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_find_next_prime(int n)
{
	if (n <= 2)
	{
		return (2);
	}
	if (n % 2 == 0)
	{
		n = n + 1;
	}
	while (ft_is_prime(n) != 1)
	{
		n = n + 2;
	}
	return (n);
}
