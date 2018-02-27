/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 09:53:14 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/12 10:54:06 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int n)
{
	if (n > 0 && n < 13)
	{
		n = n * ft_recursive_factorial(n - 1);
	}
	else if (n == 0)
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}