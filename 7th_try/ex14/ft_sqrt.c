/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:05:53 by diomende          #+#    #+#             */
/*   Updated: 2025/04/08 20:20:29 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb > 1)
	{
		while (i < nb)
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
// #include <stdio.h>
// int main (void)
// {
// 	printf("%d",ft_sqrt(4));
// }