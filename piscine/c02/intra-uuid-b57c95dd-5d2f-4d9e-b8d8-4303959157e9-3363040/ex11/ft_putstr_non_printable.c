/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:42:46 by jajung            #+#    #+#             */
/*   Updated: 2020/10/31 13:28:15 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char ch)
{
	int	mod;
	int	div;

	div = ch / 16;
	mod = ch % 16;
	write(1, &"0123456789abcdef"[div], 1);
	write(1, &"0123456789abcdef"[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] >= 127)
		{
			ft_putchar('\\');
			print_hex((unsigned char)str[i]);
		}
		else
			ft_putchar((unsigned char)str[i]);
		i++;
	}
}
