/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:53:49 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/05 09:54:15 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	ft_lowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 0;
	while (str[i])
	{
		if (((str[i] >= 32 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 64)
				|| (str[i] >= 91 && str[i] <= 96)
				|| (str[i] >= 123 && str[i] <= 126))
			&& str[i + 1] >= 97 && str[i + 1] <= 122 )
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
