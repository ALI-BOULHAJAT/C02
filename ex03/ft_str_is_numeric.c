/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:45:06 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/05 09:10:11 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while ((str[n] >= '1' && str[n] <= '9'))
		n++;
	if (str[n] == '\0')
		return (1);
	else
		return (0);
}
