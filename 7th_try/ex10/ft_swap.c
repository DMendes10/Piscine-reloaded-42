/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:05:34 by diomende          #+#    #+#             */
/*   Updated: 2025/04/08 20:11:26 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// #include <stdio.h>
// int main (void)
// {
// 	int a;
// 	int b;

// 	a = 1;
// 	b = 200;

// 	ft_swap(&a, &b);
// 	printf ("a=%d \nb=%d", a, b);
// }