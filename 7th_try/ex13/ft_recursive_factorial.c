/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:05:49 by diomende          #+#    #+#             */
/*   Updated: 2025/04/09 14:29:24 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (result);
	else if (nb < 0)
		return (0);
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
// #include <stdio.h>
// int main (void)
// {
// 	printf("%d",ft_recursive_factorial(-2));
// }