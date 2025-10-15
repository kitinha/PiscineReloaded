/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:21:01 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/15 17:40:56 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{ 
	int	i;
	int	y;

	y = 1;
	i = 0;
	while (y < argc)
	{
		while(argv[y][i])
		{
			ft_putchar(argv[y][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		y++;	
	}
}
