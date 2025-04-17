/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:05:23 by diomende          #+#    #+#             */
/*   Updated: 2025/04/08 20:15:24 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	p;
	char	i;

	p = 'P';
	i = 'N';
	if (n < 0)
		ft_putchar(i);
	else
		ft_putchar(p);
}
// int main(void)
// {
// 	ft_is_negative(-5);
// }