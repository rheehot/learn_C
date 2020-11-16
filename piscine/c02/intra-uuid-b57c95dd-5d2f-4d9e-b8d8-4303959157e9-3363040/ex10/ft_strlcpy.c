/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:25:16 by jajung            #+#    #+#             */
/*   Updated: 2020/10/31 14:31:21 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i + 1 < size)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
