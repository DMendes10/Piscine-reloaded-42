/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:05:40 by diomende          #+#    #+#             */
/*   Updated: 2025/04/08 20:11:37 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>
// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 2;
// 	b = 3;
// 	ft_div_mod(a,b,&div,&mod);
// 	printf("div=%d\nmod=%d",div,mod);
// }