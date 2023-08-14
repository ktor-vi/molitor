#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		invalid_base(char *str);

int	ft_atoi_while(char *str, char *base, int digit, int result)
{
	while (*str >= 33 && *str <= 126)
	{
		digit = 0;
		while (base[digit] != *str)
			digit++;
		if (digit >= ft_strlen(base))
			break ;
		result = result * ft_strlen(base) + digit;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	digit;

	sign = 1;
	result = 0;
	digit = 0;
	if (!invalid_base(base))
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r') || (*str == '-'
				|| *str == '+'))
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		return (ft_atoi_while(str, base, digit, result) * sign);
	}
	else
	{
		return (result);
	}
}

int	ft_nbr_chars_base(int nbr, int base_len)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_10;
	int		base_to_len;
	char	*converted_tab;
	int		i;

	i = 0;
	base_to_len = ft_strlen(base_to);
	base_10 = ft_atoi_base(nbr, base_from);
    printf("Base 10 value: %d\n", base_10);
    printf("%d", ft_nbr_chars_base(base_10, base_to_len));
	converted_tab = malloc(ft_nbr_chars_base(base_10, base_to_len) + 1);
	while (base_10 > 0)
	{
		converted_tab[ft_nbr_chars_base(base_10, base_to_len) - 1
			- i] = base_to[base_10 % base_to_len];
		base_10 /= base_to_len;
		i++;
        printf("%c", base_to[base_10 % base_to_len]);
	}
	converted_tab[i] = '\0';
	return (converted_tab);
}

int	main(void)
{
    char *test;

    test = ft_convert_base("101010", "01", "0123456789");
	printf("%s\n", test);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (power > 1)
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}

int	invalid_base(char *str)
{
	char c;
	char *temp;

	while (*str)
	{
		c = *str;
		temp = str + 1;
		while (*temp)
		{
			if (*temp == c || *temp == '+' || *temp == '-')
			{
				return (1);
			}
			temp++;
		}
		str++;
	}
	return (0);
}