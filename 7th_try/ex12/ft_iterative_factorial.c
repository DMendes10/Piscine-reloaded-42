/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:05:45 by diomende          #+#    #+#             */
/*   Updated: 2025/04/09 14:29:29 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (result);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb = nb - 1;
	}
	return (result);
}
// #include <stdio.h>
// int main (void)
// {
// 	printf("%d",ft_iterative_factorial(-2));
// }
