/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:53:12 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/14 18:07:21 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0); 
}

/* #include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(16));
} */