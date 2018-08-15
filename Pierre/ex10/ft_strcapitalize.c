/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:47:06 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/15 20:05:16 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int inword;

	i = 0;
	inword = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && inword)
			str[i] += 32;
		else if ((str[i] >= 'a' && str[i] <= 'z') && !inword)
		{
			str[i] -= 32;
			inword = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9' && !inword)
			inword = 1;
		else
			inword = 0;
		i++;
	}
	return (str);
}
