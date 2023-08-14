/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:32:45 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/12 18:44:42 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_argv(char *str)
{
	int	i;
	int	valid;

	valid = 1;
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] != '1' || str[i] != '2' || str[i] != '3'
				|| str[i] != '4')
			{
				valid = 0;
			}
		}
		i++;
	}
	return (valid);
}

int main (int argc, char **argv)
{
}