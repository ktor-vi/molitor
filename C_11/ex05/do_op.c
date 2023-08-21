/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 07:00:50 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/21 07:33:22 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		sum(int a, int b);
int		subtract(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		get_op_index(char op);
int		ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	(*p[5])(int, int);

	p[0] = sum;
	p[1] = subtract;
	p[2] = mul;
	p[3] = div;
	p[4] = mod;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) && get_op_index(argv[2][0]) != -1)
		{
			if (ft_atoi(argv[3]) == 0 && (get_op_index(argv[2][0]) == 3))
				write(1, "Stop : division by zero", 23);
			else if (ft_atoi(argv[3]) == 0 && (get_op_index(argv[2][0]) == 4))
				write(1, "Stop : modulo by zero", 22);
			else
				ft_putnbr((*p[get_op_index(argv[2][0])])(ft_atoi(argv[1]),
						ft_atoi(argv[3])));
			write(1, "\n", 1);
		}
	}
}
