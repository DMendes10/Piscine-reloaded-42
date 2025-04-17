/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:08:26 by diomende          #+#    #+#             */
/*   Updated: 2025/04/09 19:34:24 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	dest = malloc(sizeof(int) * len);
	if (!dest)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}

// #include <stdio.h>
// int main (void)
// {
// 	int i = 0;
// 	int min = 2;
// 	int max = 5;
// 	int *array = ft_range (min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d\n", array[i]);
// 		i++;
// 	}
// }