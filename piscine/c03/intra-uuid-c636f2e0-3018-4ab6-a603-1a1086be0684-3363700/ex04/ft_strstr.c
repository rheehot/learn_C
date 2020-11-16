/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:39:47 by jajung            #+#    #+#             */
/*   Updated: 2020/10/31 21:33:53 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		j = 0;
		k = i;
		while (str[k] != '\0' && to_find[j] != '\0')
		{
			if (str[k] != to_find[j])
				break ;
			k++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str);
		i++;
	}
	return (0);
}
