/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 09:48:11 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/05 09:58:49 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_c_is_alpha(char c)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (!(c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57))
	{
		result = 0;
	}
	i++;
	return (result);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_c_is_alpha(str[i - 1]) == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
