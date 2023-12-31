/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 09:48:11 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/07 09:19:00 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_c_is_alpha(char c)
{
	int	result;

	result = 1;
	if (!((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48
				&& c <= 57)))
	{
		result = 0;
	}
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
		if (ft_c_is_alpha(str[i - 1]) == 1)
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] = str[i] - ('A' - 'a');
			}
		}
		i++;
	}
	return (str);
}
