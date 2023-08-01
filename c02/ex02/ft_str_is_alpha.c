/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:50:43 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/15 18:35:53 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;
	int	b;

	i = -1;
	while (str[++i] != '\0')
	{
		a = !(str[i] >= 'a' && str[i] <= 'z');
		b = !(str[i] >= 'A' && str[i] <= 'Z');
		if (a && b)
		{
			return (0);
		}
	}
	return (1);
}